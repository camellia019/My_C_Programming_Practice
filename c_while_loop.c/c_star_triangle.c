#include <stdio.h>

int main()
{
    int asterisks, count = 0;

    printf("Enter the number of asterisks: ");
    scanf("%d", &asterisks);

    while (asterisks > count)
    {
        count++; // count = 0-> 1

        int column = 1; // column = 1
        while (column <= count)
        { // 1 <= 1
            printf("* ");
            column++; // 2 <= 1 FALSE
        }

        printf("\n"); // next line
    }

    return 0;
}