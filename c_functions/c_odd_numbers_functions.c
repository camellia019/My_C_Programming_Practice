#include <stdio.h>

void printOddNumbers()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i += 2)
    {
        printf("%d\n", i);
    }
    return;
}

int main()
{

    printOddNumbers();
}