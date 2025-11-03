#include <stdio.h>

void chessBoardPattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        { // for odd

            for (int w = 1; w <= n; w++)
            {

                if (w % 2 == 0)
                {
                    printf("⬛ ");
                }
                else
                {
                    printf("⬜ ");
                }
            }
        }
        else
        { // for even

            for (int w = 1; w <= n; w++)
            {

                if (w % 2 != 0)
                {
                    printf("⬛ ");
                }
                else
                {
                    printf("⬜ ");
                }
            }
        }

        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    chessBoardPattern(n);

    return 0;
}