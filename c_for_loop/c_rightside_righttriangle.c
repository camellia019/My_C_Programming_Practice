#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }

        for (int j = i; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n Solution No. 1\n\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((i + j) <= 5)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    printf("\nSolution No. 2\n\n");

    return 0;
}