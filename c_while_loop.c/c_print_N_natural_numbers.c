#include <stdio.h>

int main()
{
    int limit, i = 1;

    printf("Print all natural numbers from 1 to: ");
    scanf("%d", &limit);

    while (i <= limit)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}