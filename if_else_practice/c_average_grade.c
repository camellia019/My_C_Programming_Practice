#include <stdio.h>

int main()
{
    double score1, score2, score3, score4, score5;
    char grade;

    printf("Enter score 1: ");
    scanf("%lf", &score1);

    printf("Enter score 2: ");
    scanf("%lf", &score2);

    printf("Enter score 3: ");
    scanf("%lf", &score3);

    printf("Enter score 4: ");
    scanf("%lf", &score4);

    printf("Enter score 5: ");
    scanf("%lf", &score5);

    double average = (score1 + score2 + score3 + score4 + score5) / 5.00;

    printf("Average score: %.2f\n", average);

    if (average >= 90.00 && average <= 100.00)
        grade = 'A';
    else if (average >= 80.00 && average <= 89.00)
        grade = 'B';
    else if (average >= 70.00 && average <= 79.00)
        grade = 'C';
    else if (average >= 60.00 && average <= 69.00)
        grade = 'D';
    else
        grade = 'F';

    printf("Letter grade: %c", grade);

    return 0;
}