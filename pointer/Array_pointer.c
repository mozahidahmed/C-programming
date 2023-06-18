/*

01. find value of pointer
01. find value of pointer inter the for loop
03.Access array elements using pointer 
04. Change Array element using pointer


*/



// 01. find value of pointer
int number[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++)
{
    printf("%d= %p\n ", number[i], &number[i]);
}
printf("I mi holam 1= %p", number + 3);


//02
int number[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++)
{
    printf("%d= %p\n ", number[i], number + i);
}

// 03.Access array elements using pointer
int number[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++)
{
    printf("%d= %p\n ", *(number + i), number + i);
}

// Change Array element using pointer
int number[5] = {1, 2, 3, 4, 5};
*number = 2;
*(number + 4) = 4444;
printf("First Elenment : %d \n", *number);
printf("Last Element :%d", *(number + 4));