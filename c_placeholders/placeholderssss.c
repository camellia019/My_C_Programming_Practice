#include <stdio.h>

int main()
{
    char songTitle[] = "Golden";
    char composer[] = "EJAE";
    char genre[] = "K-pop; Electropop";
    char label[] = "Republic";
    char language[] = "English; Korean";
    int songLengthMins = 3;
    int songLengthSec = 14;
    char producers[] = "24; Ido; Teddy; Ian Eisendrath";
    char releaseMonth[] = "July";
    int releaseDay = 4;
    int releaseYear = 2025;

    printf("\nAbout\n\n");
    printf("\"Golden\" is a song performed by Ejae, Audrey Nuna, and\n Rei Ami as the fictional K-pop girl group Huntrix in the 2025\n animated musical fantasy film KPop Demon Hunters. It was\n released on July 4, 2025, through Republic Records, as the\n second single from the film's soundtrack album.\n\n");

    printf("Song: %s\n", songTitle);
    printf("Composer: %s\n", composer);
    printf("Genre: %s\n", genre);
    printf("Label: %s\n", label);
    printf("Language: %s\n", language);
    printf("Length: %d:%d\n", songLengthMins, songLengthSec);
    printf("Producers: %s\n", producers);
    printf("Released: %s %d, %d", releaseMonth, releaseDay, releaseYear);

    return 0;
}