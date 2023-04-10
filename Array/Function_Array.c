#include <stdio.h>
void display(int age1, int age2)
{
    printf("%d\n", age1);
    printf("%d\n", age2);
}

int main()
{
    int ageArray[] = {2, 8, 4, 12};

    // pass second and third elements to display()
    display(ageArray[1], ageArray[2]);
    return 0;
}




//pass array to function 
.
#include <stdio.h>

// notice the use of [ ] here
void printAge(int age[]) {

  // print elements of the array
  printf("%d\n", age[0]); // 2
  printf("%d\n", age[2]); // 4
}

int main() {
  int ageArray[] = {2, 8, 4, 12};

  // notice we do not use []
  // during the function call
  printAge(ageArray);

  return 0;
}
