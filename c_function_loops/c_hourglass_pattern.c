#include <stdio.h>

void hourGlassPattern(int rows);

int main()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    hourGlassPattern(rows);

    return 0;
}

void hourGlassPattern(int rows)
{

    for (int i = rows; i >= 1; i--)
    {

        for (int spaces = 1; spaces <= (rows - i); spaces++)
        {
            printf(" ");
        }

        for (int col = 1; col <= (2 * i - 1); col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 2; i <= rows; i++)
    {

        for (int spaces = 1; spaces <= (rows - i); spaces++)
        {
            printf(" ");
        }

        for (int col = 1; col <= (2 * i - 1); col++)
        {
            printf("*");
        }
        printf("\n");
    }
}