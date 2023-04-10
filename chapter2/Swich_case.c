//day find

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number 1 by 7:");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("thuesday");
        break;
    case 4:
        printf("wednessday");
        break;
    case 5:
        printf("thrusdat");
        break;

    case 6:
        printf("friyday");
        break;

    case 7:
        printf("saturday");
        break;

    default:
        printf("Invalid number");
    }

    return 0;
}
