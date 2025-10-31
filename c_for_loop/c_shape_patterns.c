#include <stdio.h>

int main()
{

    int row;

    printf("\t\t\t\t\t Shape Patterns\n");

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("\n");

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= row; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nSquare\n\n\n");

    for (int i = 1; i <= row; i++)
    { // i = 1

        for (int j = 1; j <= i; j++)
        { // j = 1; 1 <= 1
            printf("* ");
        }

        printf("\n");
    }

    printf("\nLeftside Right Triangle\n\n\n");

    for (int i = 1; i <= row; i++)
    {

        for (int j = row; j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nUpside Down Leftside Right Triangle\n\n\n");

    for (int i = 1; i <= row; i++)
    { // i = 1

        for (int j = 1; j <= i; j++)
        { // j = 1; 1 <= 1
            printf("* ");
        }

        printf("\n");
    }

    for (int i = 1; i <= row; i++)
    {

        for (int j = (row - 1); j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nLeftside Triangle\n\n\n");

    for (int i = 1; i <= row; i++)
    { // i = 1

        for (int k = 1; k <= (row - i); k++)
        { // k = 1 <= 4; 2 <= 4; 3 <= 4; 4 <= 4
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        { // j = 1; 1 <= 1
            printf("*");
        }

        printf("\n");
    }
    printf("\nRightside Right Triangle\n\n\n");

    for (int i = 1; i <= row; i++)
    { // i = 1

        for (int k = 1; k < i; k++)
        { // // k = 1; 1 < 1
            printf(" ");
        }

        for (int j = i; j <= row; j++)
        { // j = 5;  <= 4; 2 <= 4; 3 <= 4; 4 <= 4
            printf("*");
        }

        printf("\n");
    }

    printf("\nUpside Down Rightside Right Triangle\n\n\n");

    for (int i = 1; i <= row; i++)
    { // i = 1

        for (int k = 1; k <= (row - i); k++)
        { // k = 1 <= 4; 2 <= 4; 3 <= 4; 4 <= 4
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        { // j = 1; 1 <= 1
            printf("*");
        }

        printf("\n");
    }

    for (int i = 1; i <= row; i++)
    { // i = 1

        for (int k = 1; k <= i; k++)
        { // // k = 1; 1 < 1
            printf(" ");
        }

        for (int j = i; j <= row - 1; j++)
        { // j = 5;  <= 4; 2 <= 4; 3 <= 4; 4 <= 4
            printf("*");
        }

        printf("\n");
    }

    printf("\nRightside Triangle\n\n\n");

    for (int i = 1; i <= row; i++)
    { // i = 1

        for (int k = 1; k <= (row - i); k++)
        { // k = 1 <= 4; 2 <= 4; 3 <= 4; 4 <= 4
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        { // j = 1; 1 <= 1
            printf(" *");
        }

        printf("\n");
    }

    printf("\nEquilateral Triangle (By 2's)\n\n\n");

    return 0;
}