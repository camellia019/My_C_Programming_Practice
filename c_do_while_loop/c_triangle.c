#include <stdio.h>

int main()
{
    int rows, column, i = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    do
    {
        column = 0;

        do
        {
            printf("*");
            column++;

        } while (column < i);

        printf("\n");
        i++;

    } while (i <= rows);

    return 0;
}