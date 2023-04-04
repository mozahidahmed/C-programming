#include <stdio.h>

int main()
{

    int id;
    scanf("%d", &id); //main functionality
    printf("id = %d", id); //output  

    return 0;
}

#include <stdio.h>

int main()
{

    int id;
    printf("Enter a id:");
    scanf("%d", &id);
    printf("id = %d", id);

    return 0;
}



// multple input
#include <stdio.h>

int main()
{

    int id;
    double id2;

    printf("Enter a id:");
    scanf("%d%If", &id, &id2);

    printf("id = %d", id);
    printf("\n");
    printf("id2 = %If", id2);

    return 0;
}
