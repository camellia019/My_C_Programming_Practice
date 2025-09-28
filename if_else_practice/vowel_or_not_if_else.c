#include <stdio.h>

int main()
{
    char letter;

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    if (letter == 'a' || letter == 'A' ||
        letter == 'e' || letter == 'E' ||
        letter == 'i' || letter == 'I' ||
        letter == 'o' || letter == 'O' ||
        letter == 'u' || letter == 'U')
    {
        printf("%c is a vowel.", letter);
    }
    else
        printf("%c is not a vowel.", letter);

    return 0;
}