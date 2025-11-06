#include <stdio.h>
#include <string.h>

int consonantLetters(char letters)
{

    if ((letters >= 'A' && letters <= 'Z') || (letters >= 'a' && letters <= 'z'))
    {
        if ((letters == 'a' || letters == 'A' ||
             letters == 'e' || letters == 'E' ||
             letters == 'i' || letters == 'I' ||
             letters == 'o' || letters == 'O' ||
             letters == 'u' || letters == 'U'))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

int countConsonants(char *string)
{
    int consonants = 0;

    for (int j = 0; string[j] != '\0'; j++)
    {
        if (consonantLetters(string[j]))
        {
            consonants++;
        }
    }
    return consonants;
}

int main()
{
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("Number of consonants: %d", countConsonants(string));

    return 0;
}