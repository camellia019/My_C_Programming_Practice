#include <stdio.h>

void multiplicationTable(int m, int n)
{

    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}

int main()
{
    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    multiplicationTable(m, n);

    return 0;
}