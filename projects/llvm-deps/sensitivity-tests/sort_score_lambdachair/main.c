#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <uuid/uuid.h>
#include <stdbool.h>

typedef struct {
    char id[38];
} UUID;
typedef struct{
  int session;
}Session;
typedef struct {
    char* userName;
} User;

typedef enum {
    Submission,
    Reviewing,
    Done
} ConfStatus;

typedef struct{
 int score;
}Score;

typedef struct {
    char** pcMembers;
    size_t pcMemberCount;
    ConfStatus status;
    Session session;
} Config;

typedef enum{
  Accepted,
  Rejected,
  No_decision
}Decision;

typedef struct {
    UUID paperId;
    char** authors;
    size_t authorCount;
    char* title;
    char** conflicts;
    size_t conflictCount;
    Decision decision;
    Score score;
} Paper;


typedef struct {
    UUID reviewId;
    UUID paperId;
    char* author;
    char* content;
} Review;

UUID generateUUID() {
    uuid_t binuuid;
    uuid_generate_random(binuuid);
    UUID uuid;
    uuid_unparse_lower(binuuid, uuid.id);
    return uuid;
}
//void relabel(void* to_be_relabel, int predicate, char *label_dynamic, char *label_static);
int relabel(void* to_be_relabel, int predicate, char *label_dynamic, char *label_static);
 //The relabel function, now the relabel function is hard coded,

int stringInArray(char *str, char *arr[]) {
    for(int i = 0; i < 8; i++) {
        if(strcmp(str, arr[i]) == 0) {
            return 1;
        }
    }
    return 0;}

void createUser(User* user, const char* name) {
    user->userName = strdup(name);
}

void addPCMember(Config* config, const char* member) {
    config->pcMembers = realloc(config->pcMembers, (config->pcMemberCount + 1) * sizeof(char*));
    config->pcMembers[config->pcMemberCount] = strdup(member);
    config->pcMemberCount++;
}

void submitPaper(Paper* paper, char** authors, size_t authorCount, const char* title, char** conflicts, size_t conflictCount) {
    paper->paperId = generateUUID();
    paper->authors = malloc(authorCount * sizeof(char*));
    for (size_t i = 0; i < authorCount; i++) {
        paper->authors[i] = strdup(authors[i]);
    }
    paper->authorCount = authorCount;
    paper->title = strdup(title);
    paper->conflicts = malloc(conflictCount * sizeof(char*));
    for (size_t i = 0; i < conflictCount; i++) {
        paper->conflicts[i] = strdup(conflicts[i]);
    }
    paper->conflictCount = conflictCount;
    
}

void submitReview(Review* review, UUID paperId, const char* author, const char* content) { //submit a review
    review->reviewId = generateUUID();
    review->paperId = paperId;
    review->author = strdup(author);
    review->content = strdup(content);
}

int isUserInConflict(Paper* paper, const char* userName) { //check whether the assigned reviewer is conflicted to the authors
    for (size_t i = 0; i < paper->conflictCount; i++) {
        if (strcmp(paper->conflicts[i], userName) == 0) {
            return 0;//conflict
        }
    }
    return 1;//not conflict
} 

int assignReviewerToPaper(Paper* paper, const char* reviewerName) { //assign reviewers
   
   int reviewerGet = 0;
   char *label_bid = "release ? S -> P"; //dynamic label
   char *static_bid = "P"; //relabel to
   int release = isUserInConflict(paper, reviewerName);

    if (release ==1) { //check
   	reviewerGet = relabel(paper, release, label_bid, static_bid) + 10; //relabel and send to reviewerGet which will be the sink    
    return reviewerGet;
    }
    return reviewerGet;
}

void reviewDone(Config* config) { // set the conference paper reviewing status to done
	config->status = Done;
}
void setConfigStatus(Config* config){// initialized the conference paper reviewing status to Reivewing
	config->status = Reviewing;
}
void setPaperStatus(Paper* paper){// initialized the conference paper reviewing status to No_decision
        paper->decision = No_decision;
}


int checkDone(Config* config) {	//check if the conference paper reviewing is done
    if (config->status == Done) {
	return 1;	
    } else {
	return 0;
    }
}

int releaseSession(Config* config, Paper* paper, Session* sessnum){// release decision
  // Session sessnum ={9};
  // config->session = &sessnum;
   int sessionGet = 0;
   char *label_bid = "release ? S -> P"; //dynamic label
   char *static_bid = "P"; //relabel to
   int done = checkDone(config);
   if (done ==1) { //check
 	config->session =  *sessnum;
        sessionGet = relabel(&sessnum, done, label_bid, static_bid) + 10; //relabel and send to reviewerGet which will be the sink    
//	iconfig->session =  *sessnum;
	return sessionGet;   
 }
    return sessionGet;

}
char** getAuthors(Paper* paper){
   return  paper -> authors;
}

Decision releaseResult(Config* config, Paper* paper, Decision *result){// release decision
   // Decision result;
    int result_indicator = 0;
    char *label_bid = "release ? S -> P"; //dynamic label
    char *static_bid = "P"; //relabel to
    int doneR = checkDone(config);
    paper -> decision = *result;
    if (doneR ==1) { //check
         result_indicator = relabel(&paper, doneR, label_bid, static_bid) + 10; //relabel and send to reviewerGet which will be the sink    
        if (result_indicator == 10){
	return Accepted;}
	else{
	 return Rejected;}
  }
     return No_decision;
 
}


int sortScore(Config* config, Paper* paper1, Paper* paper2, const char* reviewerName) { //assign reviewers

   int score1 = 0, score2 = 0;
   int release1 = isUserInConflict(paper1, reviewerName);
   int release2 = isUserInConflict(paper2, reviewerName);

    if (release1 ==1 && release2==1) { //check
        relabel(paper1, release1, "release ? S -> P", "P"); //relabel and send to reviewerGet which will be the sink    
        relabel(paper2, release2, "release ? S -> P", "P");
	paper1->score.score = 10;
	paper2->score.score = 12;
    
    return (paper1->score.score<=paper2->score.score?1:0);}
    return -1;
}


//int viewTitle(Config* config, Paper* paper, char* name){
//   int canView;
//   if (stringInArray(getAuthors(paper,name))|| checkDone(config)){
	
//}
   	
//}



int main() {
    User user;
    createUser(&user, "Alice");
  //  printf("%d\n", 21);
    Decision decision = No_decision;
    Config config = {0};
    Session sessnum = {0};
    Paper *paper;
    Paper *paper2;
    char* authors[] = {"Alice", "Cain"};
    char* conflicts[] = {"Cain"};
    submitPaper(paper, authors, 2, "Hello", conflicts, 1);
    submitPaper(paper2, authors, 2, "Hello", conflicts, 1);
   // Session sessnum = {99};

    addPCMember(&config, user.userName);
//    setConfigStatus(&config);
//    for (int i=0;i++; i<11){
//	if (i==10){
//	reviewDone(&config);
	//printf("%d\n", checkDone(&config));
//	}
//	releaseSession(&config, &paper, &sessnum);
//	}
//    setPaperStatus(&config);
//    for (int i=0;i++; i<11){
//        if (i==10){
//        reviewDone(&config);
       // printf("%d\n", checkDone(&config));
//        }
//        releaseResult(&config, paper, &decision);
//        }

    assignReviewerToPaper(paper, "Cain");
    assignReviewerToPaper(paper, "David");
    sortScore(&config,paper, paper2, "Cain");


    Review review;
    submitReview(&review, paper->paperId, "Reviewer1", "This is a review.");

    return 0;
}

