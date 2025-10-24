#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value a: ");
    scanf("%d", &a);

    printf("Enter value b: ");
    scanf("%d", &b);

    printf("Enter value c: ");
    scanf("%d", &c);

    if (a == b && b == c)
    {
        printf("Equilateral triangle\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Isosceles triangle\n");
    }
    else
    {
        printf("Scalene triangle");
    }

    return 0;
}