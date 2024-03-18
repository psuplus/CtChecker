#include <stdio.h>
#include <string.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/err.h>
#include <openssl/aes.h>
#include <openssl/rand.h>

int relabel(void* to_be_relabel, int predicate, char *label_dynamic,
            char *label_static);

// Error Function
void handle_errors(void) {
    ERR_print_errors_fp(stderr);
    abort();
}

// Key generation an RSA key pair
RSA* generate_key_pair() {
    int ret = 0;
    RSA* r = NULL;
    BIGNUM* bne = NULL;
    unsigned long e = RSA_F4;

    // Allocate memory for the BIGNUM structure
    bne = BN_new();
    ret = BN_set_word(bne, e);
    if(ret != 1) {
        handle_errors();
    }

    r = RSA_new();
    ret = RSA_generate_key_ex(r, 2048, bne, NULL);
    if(ret != 1) {
        handle_errors();
    }

    BN_free(bne);

    return r;
}

// Function to encrypt a message using AES
int encrypt_message(unsigned char *plaintext, int plaintext_len, unsigned char *key,
                    unsigned char *iv, unsigned char *ciphertext) {
    EVP_CIPHER_CTX *ctx;

    int len;
    int ciphertext_len;

    if(!(ctx = EVP_CIPHER_CTX_new())) handle_errors();

    if(1 != EVP_EncryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, key, iv))
        handle_errors();

    if(1 != EVP_EncryptUpdate(ctx, ciphertext, &len, plaintext, plaintext_len))
        handle_errors();
    ciphertext_len = len;

    if(1 != EVP_EncryptFinal_ex(ctx, ciphertext + len, &len)) handle_errors();
    ciphertext_len += len;

    EVP_CIPHER_CTX_free(ctx);

    return ciphertext_len;
}

// Function to securely delete memory content
void secure_delete(void *ptr, size_t len) {
    volatile char *volatile p = ptr;
    int delete = 0;
    int user = 0;
    while (len--) {
        *p++ = 0;
    }
    delete = 1;
    if (delete == 1){
    user =  relabel(ptr, delete, "delete?P->S", "S") + 10;
    }

}


void message_delete(unsigned char *message, size_t len) {
    int delete = 0;
    int user = 0;
    while (len--) {
        *message++ = 0;
    }
//    delete = 1;
//    if (delete == 1){
//    user =  relabel(message, delete, "delete?P->S", "S") + 10;
//    }
}


//create another fucntion for message deletion


int main(void) {
    // Initialize OpenSSL
    OpenSSL_add_all_algorithms();
    ERR_load_crypto_strings();

    // Generate RSA key pair
    RSA* rsa_keypair = generate_key_pair();

    // Extract the private key
    BIO *pri = BIO_new(BIO_s_mem());
    PEM_write_bio_RSAPrivateKey(pri, rsa_keypair, NULL, NULL, 0, NULL, NULL);
    size_t pri_len = BIO_pending(pri);
    char* pri_key = malloc(pri_len + 1);
    BIO_read(pri, pri_key, pri_len);
    pri_key[pri_len] = '\0';
    int user = 0;
    int delete = 0;
    printf("Private Key:\n%s\n", pri_key);

    // Encryption key and IV for AES
    unsigned char key[AES_BLOCK_SIZE];
    unsigned char iv[AES_BLOCK_SIZE];
    if (!RAND_bytes(key, sizeof(key)) || !RAND_bytes(iv, sizeof(iv))) {
        handle_errors();
    }

    // Message to be encrypted
    unsigned char *plaintext = (unsigned char *)"Duke";

    // Buffer for the ciphertext
    unsigned char ciphertext[20];

    // Encrypt the message
    int ciphertext_len = encrypt_message(plaintext, strlen((char *)plaintext), key, iv, ciphertext);

    printf("Ciphertext is:\n");
    for(int i = 0; i < ciphertext_len; i++) {
    //    printf("%02x", ciphertext[i]);
    }
    printf("\n");

    // Securely delete private key from memory
    
//    if (delete == 0){
      secure_delete(pri_key, pri_len);
      message_delete(plaintext,strlen((char *)plaintext));
     // user =  relabel(plaintext, delete, "delete?P->S", "S");
      
  //  }
    // Clean up
    RSA_free(rsa_keypair);
    BIO_free_all(pri);
    free(pri_key); // Memory is freed after being securely deleted

    // Clean up OpenSSL
    EVP_cleanup();
    ERR_free_strings();

    return 0;
}
