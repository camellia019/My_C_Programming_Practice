#include <stdio.h>

void swapNum(int *num1, int *num2)
{

    *num1 = *num1 + *num2; // 2 + 4 = 6
    *num2 = *num1 - *num2; // 6 - 4 = 2
    *num1 = *num1 - *num2; // 6 - 2 = 4

    return;
}

int main()
{
    int a, b;

    printf("Input 1st number: ");
    scanf("%d", &a);

    printf("Input 2nd number: ");
    scanf("%d", &b);

    printf("Before swapping: n1 = %d, n2 = %d\n", a, b);

    swapNum(&a, &b);

    printf("After swapping: n1 = %d, n2 = %d \n", a, b);

    return 0;
}