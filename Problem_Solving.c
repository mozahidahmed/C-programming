/*
01. day find with switch case
02. word day and off day find with switch case
03. simple calculator
04. find big number 



*/

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



//off day and work day find

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number 1 by 7:");
    scanf("%d", &number);

    switch (number)
    {

    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        printf("work");
        break;

    case 1:
    case 2:
        printf("offDay");
        break;

    default:
        printf("Invalid number");
    }

    return 0;
}





//  simple calculator
#include <stdio.h>

int main()
{
    char operation;
    int n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%d", &n1);
    printf("Enter two operands: ");
    scanf("%d", &n2);

    switch (operation)
    {
    case '+':
        printf("%d + %d = %d", n1, n2, n1 + n2);
        break;

    case '-':
        printf("%d- %d= %d", n1, n2, n1 - n2);
        break;

    case '*':
        printf("%d * %d= %d", n1, n2, n1 * n2);
        break;

    case '/':
        printf("%d / %d = %d", n1, n2, n1 / n2);
        break;

    // operator doesn't match any case constant +, -, *, /
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}

//big number find 
#include <stdio.h>

int main()
{

    int number1 = 10;
    int number2 = 3;

    if (number1 > number2)
    {
        printf("The big number  %d", number1);
    }
    else
    {
        printf("The big number %d", number2);
    }

    return 0;
}

//input user value
#include <stdio.h>

int main()
{

    int number1;
    int number2;
    printf("write number 1:");
    scanf("%d", &number1);
    printf("\n");
    printf("write number 2:");
    scanf("%d", &number2);

    if (number1 > number2)
    {
        printf("The big number %d", number1);
    }
    else
    {
        printf("The big number %d", number2);
    }

    return 0;
}