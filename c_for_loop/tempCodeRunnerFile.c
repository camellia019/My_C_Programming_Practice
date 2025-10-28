#include <stdio.h>

int main()
{

    for (int column = 1; column <= 5; column++)
    {
        printf("*\n"); // works vertically downwards

        for (int row = 1; row <= column; row++)
        {
            printf("* "); // works by rows
        }
    }

    return 0;
}