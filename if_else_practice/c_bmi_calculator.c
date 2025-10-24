#include <stdio.h>

int main()
{
    double weight, height, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%lf", &weight);

    printf("Enter your height in meters: ");
    scanf("%lf", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.50)
    {
        printf("Underweight\n");

        if (bmi < 16.00)
        {
            printf("Severely underweight\n");
        }
        else
        {
            printf("Mild to moderate underweight\n");
        }
    }
    else if (bmi < 25.0)
    {
        printf("Normal weight\n");
    }

    else if (bmi < 30.00)
    {
        printf("Overweight\n");

        if (bmi < 27.50)
        {
            printf("Pre-obese\n");
        }
        else
        {
            printf("Obese class I\n");
        }
    }
    else
    {
        printf("Obese\n");

        if (bmi < 35.0)
        {
            printf("Obese class II\n");
        }
        else
        {
            printf("Obese class III\n");
        }
    }

    return 0;
}