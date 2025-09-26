#include <stdio.h>
int main()
{
    int totalMins, hours, minutes;
    printf("Enter total minutes: ");
    scanf("%d", &totalMins); // 120 hours = totalMins / 60; //120 / 60 = 2 hours

    minutes = totalMins % 60; // 120 / 60 = 0 remainder

    printf("%d hours and %d minutes", hours, minutes);
    return 0;
}