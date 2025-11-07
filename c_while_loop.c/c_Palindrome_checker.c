#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[100], reverseString[100], lowerstring[100];
    int length, reverse, i = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    for (int j = 0; string[j] != '\0'; j++)
    {
        lowerstring[j] = tolower(string[j]); // to make all the kinds of capitalizations of characters to
                                             // lower characters
    }

    lowerstring[strlen(string)] = '\0'; // to add a NULL at the last

    length = strlen(lowerstring); // count how many characters
    reverse = length - 1;         // to not count the \0

    while (reverse >= 0)
    {
        reverseString[i] = lowerstring[reverse]; // reverseString will store the reversed string from lowerString
        reverse--;                               // it lowers the character index
        i++;                                     // i controls where reversed letters go
    }

    reverseString[i] = '\0'; // tell C where to stop, since you manually made a new reversed string

    if (strcmp(reverseString, lowerstring) == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}