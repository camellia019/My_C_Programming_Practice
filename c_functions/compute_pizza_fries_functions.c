#include <stdio.h>

int getInput(char ask[]);
float computeBill(int pizza, int fries);
void displayBill(float totalBill);

int main()
{
    int pizza, fries;

    pizza = getInput("Enter the number of pizza: ");
    fries = getInput("Enter the number of fries: ");

    displayBill(computeBill(pizza, fries));

    return 0;
}

int getInput(char ask[])
{
    int food;
    printf("%s", ask);
    scanf("%d", &food);
    return food;
}

float computeBill(int pizza, int fries)
{
    float totalBill = pizza * 12.50 + fries * 4.75;
    return totalBill;
}

void displayBill(float totalBill)
{
    printf("The total bill is %.2f", totalBill);
}