#include <stdio.h>

int main()
{

    char bigAlphabets = 'A';
    char smallAlphabets = 'a';

    printf("All alphabets from Aa to Zz:\n");

    while (bigAlphabets <= 'Z' || smallAlphabets <= 'z')
    {
        printf("%c%c ", bigAlphabets, smallAlphabets);
        bigAlphabets++;
        smallAlphabets++;
    }

    return 0;
}