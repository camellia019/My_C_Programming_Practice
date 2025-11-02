#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[100], lowerch;
    int consonants = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    for (int j = 0; string[j] != '\0'; j++)
    {
        lowerch = tolower(string[j]);

        if (isalpha(lowerch) && !(lowerch == 'a' || lowerch == 'A' ||
                                  lowerch == 'e' || lowerch == 'E' ||
                                  lowerch == 'i' || lowerch == 'I' ||
                                  lowerch == 'o' || lowerch == 'O' ||
                                  lowerch == 'u' || lowerch == 'U'))
        {
            consonants++;
        }
    }

    printf("Number of consonants: %d", consonants);

    return 0;
}