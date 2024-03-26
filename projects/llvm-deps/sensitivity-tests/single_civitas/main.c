#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/evp.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>


typedef struct {
    // Placeholder for a vote capability share
    int shareValue; // Example share value
    int delivered; // Delivery status
} VoteCapabilityShare;

typedef struct{
 int number_1;
 int number_2;

}Vote;

typedef struct {
  int number_1;
  int number_2;
}Ballot;

typedef struct {
    VoteCapabilityShare share;
    int voterID; // Voter identifier
    int shareDelivered; // Flag to indicate whether the share is delivered
    Vote vote;
} Voter;

typedef struct {
    // Example fields related to supervisor
    int shareDelivered;
    VoteCapabilityShare share;
    int id; // Supervisor identifier
} Supervisor;

//The registrar authorizes voters
typedef struct {
    char* registrar_id;
    EVP_PKEY* registrar_key; // registrar public key
} Registrar;

// Registration tellers generate the credentials that voters use to cast their votes.
typedef struct {
    char* teller_id;
    EVP_PKEY* teller_key; // Teller's public key
    // Registration teller-specific details can be added here
} RegistrationTeller;

//Tabulation tellers tally votes.
typedef struct {
    char* tabulation_teller_id;
    EVP_PKEY* tabulation_teller_key; // Tabulation teller's public key
    // Tabulation teller-specific details can be added here
} TabulationTeller;

typedef struct {
    char* voter_id; // Voter's identifier (name or registration number)
    EVP_PKEY* registration_key; // Voter's registration public key
    EVP_PKEY* designation_key; // Voter's designation public key
} VoterInfo;

typedef struct { //post public infos here
    char* ballot_design;
    EVP_PKEY* supervisor_key;
    EVP_PKEY** teller_keys;
    int num_tellers;
    VoterInfo* electoral_roll;
    int num_voters;
    BIGNUM* p; // Prime number
    BIGNUM* g; // Generator
    BIGNUM* y; // Public key (g^x mod p)
    BIGNUM* x; // Private key
    int election_active;
} BulletinBoard;


typedef struct {
    BIGNUM* p; // Prime number
    BIGNUM* g; // Generator
    BIGNUM* y; // Public key (g^x mod p)
    BIGNUM* x; // Private key
} ElGamalParameters;


int relabel(void* to_be_relabel, int predicate, char *label_dynamic,
            char *label_static);//The relabel function for dynamic label

VoterInfo init_voter_info(char* voter_id, EVP_PKEY* reg_key, EVP_PKEY* des_key) {//To create the initial voter information
    VoterInfo vi;
    vi.voter_id = voter_id;
    vi.registration_key = reg_key;
    vi.designation_key = des_key;
    return vi;
}

EVP_PKEY* generate_rsa_key() {
    EVP_PKEY* pkey = NULL;
    EVP_PKEY_CTX* pctx = EVP_PKEY_CTX_new_id(EVP_PKEY_RSA, NULL);
    if (EVP_PKEY_keygen_init(pctx) <= 0) return NULL;
    if (EVP_PKEY_CTX_set_rsa_keygen_bits(pctx, 2048) <= 0) return NULL;
    if (EVP_PKEY_keygen(pctx, &pkey) <= 0) return NULL;
    EVP_PKEY_CTX_free(pctx);
    return pkey;
}
int verify_registration_key(char* voterRegistrationKey) {
    // Simulate verification success
    return 1;
}

ElGamalParameters generateElGamalKeys() {
    BN_CTX* ctx = BN_CTX_new();
    ElGamalParameters keys;

    // Initialize BIGNUMs
    keys.p = BN_new();
    keys.g = BN_new();
    keys.y = BN_new();
    keys.x = BN_new();

    // Generate a safe prime for p (2048 bits)
    if (!BN_generate_prime_ex(keys.p, 2048, 1, NULL, NULL, NULL)) {
        fprintf(stderr, "Prime generation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Set g as a small prime or a generator of the multiplicative group modulo p
    BN_set_word(keys.g, 2);

    // Generate private key x (1 < x < p-1)
    if (!BN_rand_range(keys.x, keys.p)) {
        fprintf(stderr, "Private key generation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Calculate y = g^x mod p (public key)
    if (!BN_mod_exp(keys.y, keys.g, keys.x, keys.p, ctx)) {
        fprintf(stderr, "Public key calculation failed.\n");
        exit(EXIT_FAILURE);
    }

    BN_CTX_free(ctx);
    return keys;
}

void freeElGamalKeys(ElGamalParameters* keys) {
    BN_free(keys->p);
    BN_free(keys->g);
    BN_free(keys->y);
    BN_free(keys->x);
}

void distributeShares(BIGNUM *secret, int n, int k) {
    // Placeholder array for polynomial coefficients
    // In a real implementation, these should be large numbers in a finite field
    int coefficients[10];
    // Seed for random number generation
    srand(time(NULL));
    // Set the secret as the first coefficient of the polynomial
    coefficients[0] = BN_get_word(secret);
    // Generate random coefficients for the polynomial
    for (int i = 1; i < k; i++) {
        coefficients[i] = rand() % 100; // Placeholder: Real implementation should use secure random numbers in the field
    }

    printf("Distributing shares:\n");

    // Calculate and distribute shares
    for (int i = 1; i <= n; i++) {
        int share = coefficients[0]; // Start with the secret

        for (int j = 1; j < k; j++) {
            share += coefficients[j] * pow(i, j); // Placeholder: Real implementation should perform modular exponentiation in the field
        }

        printf("Share %d: %d\n", i, share); // In a real scenario, shares would be securely distributed to participants
    }
}

// Function for the supervisor to start the election
void start_election(BulletinBoard* bb, char* ballot_design, EVP_PKEY* supervisor_key, EVP_PKEY** teller_keys, int num_tellers) {
    bb->ballot_design = ballot_design;
    bb->supervisor_key = supervisor_key;
    bb->teller_keys = teller_keys;
    bb->num_tellers = num_tellers;
    bb->election_active = 1;
    printf("Election has started.\n");
}

// Function for the supervisor to stop the election
void stop_election(BulletinBoard* bb) {
    bb->election_active = 0;
    printf("Election has stopped.\n");
}

void post_electoral_roll(BulletinBoard* bb, VoterInfo* voters, int num_voters) {
    bb->electoral_roll = voters;
    bb->num_voters = num_voters;
    printf("Electoral roll has been posted.\n");
}

//voting phase

void exchange_protocol_for_credential_share(char* designationKey) {
    printf("Exchanging credential share with the voter using the designation key.\n");
}

void registerVoter(char* voterID, char* registrationKey, char* designationKey) {
    if (verify_registration_key(registrationKey)) {
        printf("Voter %s authenticated successfully.\n", voterID);
        exchange_protocol_for_credential_share(designationKey);
        printf("Teller's share of the private credential released to voter %s.\n", voterID);
    } else {
        printf("Authentication failed for voter %s.\n", voterID);
    }
}


//generate shares
// Function to generate a vote capability share with given ElGamal parameters
VoteCapabilityShare generateVoteCapabilityShare(ElGamalParameters params) {
    VoteCapabilityShare share;
    share.shareValue = rand(); // Simulate share generation
    share.delivered = 0; // Not delivered initially
    BN_rand_range(share.shareValue, params.p);
    return share;
}

void choose_number_1(Voter* voter){
   voter->vote.number_1 = 1;
}

void choose_number_2(Voter* voter){
   voter->vote.number_2 = 1;
}

void sendToBallot(Voter* voter, Ballot* ballot){
 if (voter->vote.number_1 == 1 && voter->vote.number_2 == 0){
  ballot->number_1 += 1;
}
 if (voter->vote.number_1 == 0 && voter->vote.number_2 == 1){
  ballot->number_2 += 1;} 
}


void initializeBoard(BulletinBoard* board) {
    if (!board) return;

    BN_CTX* ctx = BN_CTX_new();
    board->p = BN_new();
    board->g = BN_new();
    board->y = BN_new();
    board->x = BN_new();

    // Generate a safe prime for p (2048 bits)
    BN_generate_prime_ex(board->p, 2048, 1, NULL, NULL, NULL);

    // Set g as a small prime or a generator of the multiplicative group modulo p
    BN_set_word(board->g, 2);

    // Generate private key x (1 < x < p-1)
    BN_rand_range(board->x, board->p);

    // Calculate y = g^x mod p (public key)
    BN_mod_exp(board->y, board->g, board->x, board->p, ctx);

    BN_CTX_free(ctx);
}



void combineKeyGenerationWithShareDistribution() {
    BIGNUM *p = NULL, *g = NULL, *x = NULL, *y = NULL;
    int n = 5; // Total number of shares
    int k = 3; // Minimum number of shares to reconstruct the secret

    // Step 1: Generate ElGamal keys
   // generateElGamalKeys(&p, &g, &x, &y);
    printf("ElGamal Keys Generated.\n");

    // Step 2: Distribute shares of the private key
    distributeShares(x, n, k);
    printf("Shares Distributed.\n");

    // Clean up
    BN_free(p);
    BN_free(g);
    BN_free(x);
    BN_free(y);
}

//step 3 in the section 3 setup phase
void generate_and_post_collective_key(BulletinBoard* bb, ElGamalParameters keys) {
    // Placeholder for collective key generation
    //keys = generateElGamalKeys();
    BIGNUM* p_str = BN_bn2dec(keys.p);
    BIGNUM* g_str = BN_bn2dec(keys.g);
    BIGNUM* y_str = BN_bn2dec(keys.y);
    BIGNUM* x_str = BN_bn2dec(keys.x);

    bb->p = p_str;
    bb->g = g_str;
    bb->y = y_str;
    bb->x = x_str;
    //bb->collective_public_key = generate_rsa_key(); // Simulate collective key generation
    //printf("Collective public key has been posted.\n");
}


void declassifyBoard(BulletinBoard* bb, ElGamalParameters keys){
    int allPosted = 0;	
    int posted = 0;
    for (int i =0; i<=10; i++){
        generate_and_post_collective_key(bb, keys);
        if (i==10){
	   allPosted = 1;
	}
        if (allPosted == 1){
	   posted = relabel(&keys, allPosted, "allPosted?S->P", "P") + 10;
	
	}
   }
   

}


void secureEraseShare(VoteCapabilityShare *share) {
    share->shareValue = 0; // Overwrite share value to simulate erasure
    share->delivered = 0; // Reset delivery status
    //printf("Share securely erased.\n");
}


void removeShareFromSystem(Voter *voter, Supervisor *supervisor) {
    if (voter->shareDelivered) {
        secureEraseShare(&voter->share);
    }
}

void removeShareFromVoter(Supervisor *supervisor) {
    if (supervisor->shareDelivered) {
        secureEraseShare(&supervisor->share);
    }
}


void deliverShareToVoter(Voter *voter, Supervisor *supervisor, VoteCapabilityShare *share) {
    int system = 0;
    int user = 0;
    int delivered = 0;
    // Simulate delivering the share to the voter
    for (int i=0; i<11; i++){
        if (i==10){
            voter->shareDelivered = 1; //delivered
            delivered = 1;
        }
        if (delivered == 1){
            removeShareFromSystem(voter, supervisor);
            removeShareFromVoter(voter);
            system = relabel(share, delivered, "delete?P->S", "S")+10;
            user = relabel(share, delivered, "delete?P->S", "S")+10;
        }
    }
    //voter->shareDelivered = 1; // Mark as delivered
    //printf("Share delivered to Voter ID %d.\n", voter->voterID);
    
    // Securely erase the share after delivery
    secureEraseShare(&voter->share);
   // secureEraseShare(&supervisor->share);
}


int voteAction(Voter* voter, Ballot* ballot){
//check whether the shares are delivered
int r = rand() % 10;
if (voter->shareDelivered == 1){
  if (r%2 == 0){ 
  choose_number_1(voter);
}
else{
choose_number_2(voter);
}
sendToBallot(voter, ballot);
return 1;
}
else{
return 0;
}

}


void tallyPhase(Ballot* ballot){
//Open Ballot
   int num1;
   int num2;
   num1 = ballot -> number_1;
   num2 = ballot -> number_2;
    
}

int main() {
    ElGamalParameters keys = generateElGamalKeys();
    ElGamalParameters params = {12345675678}; // Example initialization
    Voter voter;
    Voter Alice;
    Voter Bob;
    Ballot ballot = {0,0};
    Supervisor supervisor;
    BulletinBoard bboard;
    VoteCapabilityShare share = {123,456};
    int generationPhase = 0;   
//    declassifyBoard(&bboard, keys);

    // Initialize voter and their share
    voter.voterID = 1234; // Example voter ID
    voter.share = generateVoteCapabilityShare(params);
    voter.shareDelivered = 0; // Initially not delivered
    
    generationPhase = 1;
    // Deliver the share and secure erase it
    deliverShareToVoter(&voter, &supervisor, &share);
    voteAction (&Alice, &ballot);
    return 0;
}
