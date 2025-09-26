#include <stdio.h>
#include <math.h>

int main()
{
    float realNum, ceilingNum, floorNum;

    printf("Enter a real number: ");
    scanf("%f", &realNum);

    printf("Ceiling: %.2f\n", ceil(realNum));
    printf("Floor: %.2f", floor(realNum));

    return 0;
}