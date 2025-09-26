#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    const float PI = 3.1416;

    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = PI * pow(radius, 2.00);

    printf("The area of the circle with the radius of %.2f is %.2f.", radius, area);

    return 0;
}