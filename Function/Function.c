//01. Just function check 

#include <stdio.h>
void hello()
{
    printf("hello i am a function");
}
int main()
{
    hello();

    return 0;
}


//02. function perametare 
//.............
#include <stdio.h>
void hello(int number)
{
    printf("Number : %d", number);
}
int main()
{
    hello(5);

    return 0;
}

//.............
#include <stdio.h>
void hello(int number)
{
    int sum = number + 5;
    printf("%d", sum);
}
int main()
{
    hello(5);

    return 0;
}

//..........
#include <stdio.h>
void hello(int number1, int number2)
{
    int sum = number1 + number2;
    printf("%d", sum);
}
int main()
{
    hello(5, 4);

    return 0;
}


//03, Return Function 

#include <stdio.h>

int hello(int number1, int number2)
{
    int sum = number1 + number2;
    return sum;
}
int main()
{
    int result = hello(5, 10);
    printf("%d", result);

    return 0;
}


//04. math
#include <stdio.h>
#include <math.h>

int main()
{
    int result = sqrt(25);
    printf("%d", result);

    return 0;
}

//main always a function 