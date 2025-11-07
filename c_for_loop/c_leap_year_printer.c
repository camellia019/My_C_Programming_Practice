#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    printf("Leap years between %d and 2020:\n", year);

    if (year > 2020)
    {
        for (int i = 2020; i <= year; i++)
        {
            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            {
                printf("%d\n", i);
            }
        }
    }

    else
    {
        for (int i = year; i >= 2020; i++)
        {
            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}