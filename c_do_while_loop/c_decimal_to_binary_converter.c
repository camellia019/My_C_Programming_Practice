#include <stdio.h>
#include <math.h>

int main()
{
    int deciNum, remain, binary = 0, exponent = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &deciNum);

    do
    {

        remain = deciNum % 2;                         // 0
        binary = binary + remain * pow(10, exponent); // 0 + 0 x 10^0
        deciNum /= 2;
        exponent++;

    } while (deciNum > 0);

    printf("Binary equivalent: %d", binary);
    return 0;
}