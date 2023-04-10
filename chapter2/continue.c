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
            continue
        }
    }

    return 0;
}
