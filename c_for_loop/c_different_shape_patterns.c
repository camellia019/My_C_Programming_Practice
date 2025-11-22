#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nSQUARE\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nSQUARE WITH A HOLLOW\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= rows; j++)
        {

            if (i == 1 || i == rows || j == 1 || j == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nSQUARE WITH HOLLOW DIAGONAL\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= rows; j++)
        {

            if (i == 1 || i == rows || j == 1 || j == rows || i == j || j == (rows - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nRHOMBUS\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nMIRRORED RHOMBUS\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space < i; space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nRHOMBUS WITH HOLLOW\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nMIRRORED RHOMBUS WITH HOLLOW\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space < i; space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nRHOMBUS WITH HOLLOW DIAGONAL\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows || i == j || j == (rows - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nMIRRORED RHOMBUS WITH HOLLOW DIAGONAL\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space < i; space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows || i == j || j == (rows - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nRIGHT TRIANGLE\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nMIRRORED RIGHT TRIANGLE\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nINVERTED RIGHT TRIANGLE\n\n");
    for (int i = rows; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nMIRRORED INVERTED RIGHT TRIANGLE\n\n");
    for (int i = rows; i >= 1; i--)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nRIGHT TRIANGLE WITH HOLLOW\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1 || i == rows || i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nMIRRORED RIGHT TRIANGLE WITH HOLLOW\n\n");

    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == rows || i == j || j == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nINVERTED RIGHT TRIANGLE WITH HOLLOW\n\n");
    for (int i = rows; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            if (i == rows || i == 1 || j == 1 || i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nINVERTED MIRRORED RIGHT TRIANGLE WITH HOLLOW\n\n");
    for (int i = rows; i >= 1; i--)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            if (i == rows || i == 1 || j == 1 || i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nPYRAMID TRIANGLE\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\nINVERTED PYRAMID TRIANGLE\n\n");
    for (int i = rows; i >= 1; i--)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nPYRAMID TRIANGLE WITH HOLLOW\n\n");

    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (i == rows || j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nINVERTED PYRAMID TRIANGLE WITH HOLLOW\n\n");

    for (int i = rows; i >= 1; i--)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (i == rows || j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nHALF DIAMOND\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = (rows - 1); i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\nMIRRORED HALF DIAMOND\n\n");
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = rows; i >= 1; i--)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\nDIAMOND STAR\n\n");
    // UPPER TRIANGLE + LOWER TRIANGLE = DIAMOND!!!
    // UPPER TRIANGLE
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
    // LOWER TRIANGLE
    for (int i = (rows - 1); i >= 1; i--)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\nHOLLOW DIAMOND\n\n");
    // UPPER HALF
    for (int i = 1; i <= rows; i++)
    {

        for (int j = i; j <= rows; j++)
        {
            printf("*");
        }

        for (int space = 1; space <= (2 * i - 2); space++)
        {
            printf(" ");
        }

        for (int j = i; j <= rows; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    // LOWER HALF
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (int space = (2 * i - 2); space < (2 * rows - 2); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}