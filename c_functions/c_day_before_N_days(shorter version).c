#include <stdio.h>

int nthDay(int d, int n)
{

        int dayWeek = (d - n) % 7;

        if (dayWeek < 0)
        {
                dayWeek += 7;
        }

        return dayWeek;
}

int main()
{
        int day, n;

        printf("Enter day and n: ");
        scanf("%d %d", &day, &n);

        switch (nthDay(day, n))
        {
        case 0:
                printf("Sunday\n");
                break;
        case 1:
                printf("Monday\n");
                break;
        case 2:
                printf("Tuesday\n");
                break;
        case 3:
                printf("Wednesday\n");
                break;
        case 4:
                printf("Thursday\n");
                break;
        case 5:
                printf("Friday\n");
                break;
        case 6:
                printf("Saturday\n");
                break;
        }
        return 0;
}