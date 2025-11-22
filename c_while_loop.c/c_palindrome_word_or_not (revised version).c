#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[100];
    int length, reverse;
    int i = 0;
    int isPalindrome = 1; // true palindrome

    printf("Enter a string: ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        string[i] = tolower(string[i]);
    }

    length = strlen(string);
    reverse = length - 1;

    while (i <= reverse)
    {

        if (string[i] != string[reverse])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        reverse--;
    }
    if (isPalindrome)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

    return 0;
}