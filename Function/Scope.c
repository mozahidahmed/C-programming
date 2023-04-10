/*
 01. local scope
 02. Block scope
 03. variable scope

*/


 //local scope 
#include <stdio.h>

void myFunc() {
  int number = 5;
}

int main() {

  myFunction();
  printf("%d", number);  // Error

  return 0;
}

//block scope 

#include <stdio.h>

int main() {

  // the variable i is in accessible
  // anywhere from inside main()
  int i;

  for (i = 1; i <= 5; ++i) {
    printf("Hey");
  }
  printf("%d", i);

  return 0;
}

