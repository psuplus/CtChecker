#include<stdio.h>
#include<string.h>

void taint_branch(int);
char* getpasswd();

int main(int argc, char *argv[])
{
  int ctx;
  taint_branch(ctx);
  return 0;
}

void taint_branch(int x) {
  char* userpass = "Hello";

  size_t passlen;
  //passlen = mystrlen(userpass);
  char* sc;
  for (sc = userpass; *sc != "\0"; sc++);
  passlen = (sc - userpass);

  if (passlen == 0)
    ;
}

char* getpasswd() {
    return "Hello";
}
