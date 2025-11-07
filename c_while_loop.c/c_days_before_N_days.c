#include <stdio.h>
int nthDay(int d, int n)
{

        // write your code here
        int dayWeek = 0, i = 1;

        dayWeek = d;

        while (i <= n)
        {
                if (dayWeek > 0)
                {
                        dayWeek -= 1;
                        i++;
                }
                else
                {
                        dayWeek = 6;
                        i++;
                }
        }
        return dayWeek;
}

int main()
{
        int day, n;

        printf("Input day and n: ");
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