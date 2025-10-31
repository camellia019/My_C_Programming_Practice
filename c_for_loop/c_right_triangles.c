#include <stdio.h>

int main()
{

    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= i && j <= columns; j++)
        {
            printf("* ", j);
        }
        printf("\n");
    }

    return 0;
}