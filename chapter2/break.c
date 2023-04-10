// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    for (int i = 1; i <= 5; i++)
    {
        printf("\n%d", i);
        break;
        printf("\n%d", i);
    }

    return 0;
}





// for condition 
#include <stdio.h>

int main()
{
    // Write C code here
    for (int i = 1; i <= 5; i++)
    {
        printf("\n%d", i);
        if (i == 3)
        {
            printf("more than 3 ++");
        }
    }

    return 0;
}



// 
#include <stdio.h>

int main()
{
    while (1)
    {
        // Write C code here
        int number;
        printf("Enter a value:");
        scanf("\n%d", &number);

        if (number < 0)
        {
            break;
        }

        printf("%d\n", number);
    }
    return 0;
}