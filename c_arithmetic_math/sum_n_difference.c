#include <stdio.h>

int main()
{
    int num1, num2;
    float numA, numB;

    scanf("%d %d", &num1, &num2);

    scanf("%f %f", &numA, &numB);

    int sum = num1 + num2, difference = num1 - num2; // 10 + 4 : num1 =14, num2 = 4 - -6 : num2 = 10

    printf("%d %d\n", sum, difference);

    float sumA = numA + numB, differenceA = numA - numB;

    printf("%.1f %.1f", sumA, differenceA);

    return 0;
}