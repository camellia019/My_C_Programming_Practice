#include <stdio.h>

double calculatePercentage(double value, double total)
{
    return (value / total) * 100.00;
}
int main()
{
    double value, total;

    printf("Enter the value: ");
    scanf("%lf", &value);

    printf("Enter the total: ");
    scanf("%lf", &total);

    printf("%.2f%% of %.2f is %.2f", calculatePercentage(value, total), total, value);

    return 0;
}