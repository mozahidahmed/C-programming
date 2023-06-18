
/*
01. Write pointer
02. pointer variable
03  access value using pointer
04. Array loop using pointer


*/

//01. Write pointer
int age = 7;
printf("%p", &age);


//02. pointer variable
    int *p = age;

int age = 7;
printf("%p\n", &age);
int *p = age;

printf("%p", &age);


//03 access value using pointer 
    int age=7;
    int* ptr=&age;
    printf("%p\n", ptr);
    printf("Value: %d",*ptr);


