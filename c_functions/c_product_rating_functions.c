#include <stdio.h>

double calculateAverageRating(double quality, double price, double service)
{
    return (quality + price + service) / 3.00;
}
void analyzeProductRating(char *productName, char *category, double quality, double price, double service)
{
    printf("Product Name: %s\n", productName);
    printf("Category: %s\n", category);
    printf("Quality Rating: %.2f\n", quality);
    printf("Price Rating: %.2f\n", price);
    printf("Service Rating: %.2f\n", service);
}

int main()
{
    char productName[100], category[100];
    double quality, price, service;

    printf("Enter Product Name: ");
    scanf("%s", productName);

    printf("Enter Category: ");
    scanf("%s", category);

    printf("Enter Quality Rating: ");
    scanf("%lf", &quality);

    printf("Enter Price Rating: ");
    scanf("%lf", &price);

    printf("Enter Service Rating: ");
    scanf("%lf", &service);

    analyzeProductRating(productName, category, quality, price, service);
    printf("Overall Average Rating: %.2f", calculateAverageRating(quality, price, service));

    return 0;
}