#include <stdio.h>

int main()
{
    int days, years, months;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    months = (days % 365) / 30;
    days = days % 365 % 30;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", days);

    return 0;
}