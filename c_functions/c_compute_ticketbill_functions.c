#include <stdio.h>

int getInput(char ask[]);
float computeBill(int adultTickets, int childTickets);
void displayBill(float totalSpent);

int main()
{
    int adultTickets, childTickets;

    adultTickets = getInput("Enter the number of adult tickets: ");
    childTickets = getInput("Enter the number of child tickets: ");

    displayBill(computeBill(adultTickets, childTickets));

    return 0;
}

int getInput(char ask[])
{
    int tickets;
    printf("%s", ask);
    scanf("%d", &tickets);
    return tickets;
}
float computeBill(int adultTickets, int childTickets)
{
    float totalBill;

    if (adultTickets + childTickets >= 5)
        totalBill = (adultTickets * 250.00 + childTickets * 150.00) * 0.90;
    else
        totalBill = adultTickets * 250.00 + childTickets * 150.00;
    return totalBill;
}
void displayBill(float totalSpent)
{
    printf("Your total bill is: P%.2f", totalSpent);
}