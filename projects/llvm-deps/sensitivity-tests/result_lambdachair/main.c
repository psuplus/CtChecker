(base) jcc150@linux21$ vim main.c 









































int main() {
    User user;
    createUser(&user, "Alice");
  //  printf("%d\n", 21);
    Config config = {0};
    Paper *paper;
   // Session sessnum = {9};
    Decision result = No_decision;
    char* authors[] = {"Alice", "Cain"};
    char* conflicts[] = {"Cain"};
    submitPaper(&paper, authors, 2, "Hello", conflicts, 1);

    addPCMember(&config, user.userName);
  //  setConfigStatus(&config);
    //for (int i=0;i++; i<11){
      //  if (i==10){
      //  reviewDone(&config);
        //printf("%d\n", checkDone(&config));
      //  }
      //  releaseSession(&config, &paper, &sessnum);
      //  }
    setPaperStatus(&config);
    for (int i=0;i++; i<11){
        if (i==10){
        reviewDone(&config);
       // printf("%d\n", checkDone(&config));
        }
        releaseResult(&config, &paper, &result);
        }

//    assignReviewerToPaper(&paper, "Cain");
//    assignReviewerToPaper(&paper, "David");

    Review review;
    submitReview(&review, paper->paperId, "Reviewer1", "This is a review.");

    return 0;
}

