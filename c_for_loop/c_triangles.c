#include <stdio.h>

int main()
{

    for (int column = 1; column <= 5; column++)
    {

        for (int row = 1; row <= column; row++)
        {
            printf("* "); // works by rows
        }
        printf("\n");
    }

    return 0;
}