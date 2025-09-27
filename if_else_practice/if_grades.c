#include <stdio.h>

int main()
{
    int grade;

    printf("Enter percentage grade: ");
    scanf("%d", &grade);

    if (100 >= grade && grade >= 90)
        printf("Letter grade: A");

    else if (89 >= grade && grade >= 80)
        printf("Letter grade: B");

    else if (79 >= grade && grade >= 70)
        printf("Letter grade: C");

    else if (69 >= grade && grade >= 60)
        printf("Letter grade: D");

    else if (grade < 60)
        printf("Letter grade: F");

    return 0;
}