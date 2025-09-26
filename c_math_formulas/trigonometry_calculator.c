#include <stdio.h>
#include <math.h>

int main()
{
    int radians;
    float sine, cosine, tangent;

    printf("Enter the angle in radians: ");
    scanf("%d", &radians);

    printf("Sine: %.2f\n", sin(radians));
    printf("Cosine: %.2f\n", cos(radians));
    printf("Tangent: %.2f", tan(radians));
    return 0;
}