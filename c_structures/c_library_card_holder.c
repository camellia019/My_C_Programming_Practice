#include<stdio.h>

struct LibraryCard{
    
    char cardHolder[100];
    int cardNumber;
    int booksBorrowed;
};

int main(){
    
    struct LibraryCard person;
    
    printf("Enter card holder's name: ");
    fgets(person.cardHolder, sizeof(person.cardHolder), stdin);
    
    person.cardHolder[strcspn(person.cardHolder,"\n")] = '\0';
    
    printf("Enter card number: ");
    scanf("%d", &person.cardNumber);
    
    printf("Enter number of books borrowed: ");
    scanf("%d", &person.booksBorrowed);
    
    printf("\nLibrary Card Details:\n");
    printf("Card Holder: %s\n", person.cardHolder);
    printf("Card Number: %d\n", person.cardNumber);
    printf("Books Borrowed: %d\n", person.booksBorrowed);
    
    return 0;
}