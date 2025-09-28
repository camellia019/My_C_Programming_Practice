#include <stdio.h>

double areaCircle(double radius)
{
    const double pi = 3.141592;
    double area = pi * radius * radius;
    return area;
}

int main()
{

    double r;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    printf("The area of the circle is %.2lf", areaCircle(r));

    return 0;
}