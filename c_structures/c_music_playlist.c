#include<stdio.h>
#include<string.h>

struct Song{
    char title[100];
    char artist[100];
    float duration;
};

int main(){
    
    struct Song myPlaylist;
    
    printf("Enter song title: ");
    fgets(myPlaylist.title, sizeof(myPlaylist.title), stdin);
    
    myPlaylist.title[strcspn(myPlaylist.title, "\n")] = '\0';
    
    printf("Enter artist name: ");
    fgets(myPlaylist.artist, sizeof(myPlaylist.artist), stdin);
    
    myPlaylist.artist[strcspn(myPlaylist.artist, "\n")] = '\0';
    
    printf("Enter song duration (in minutes): ");
    scanf("%f", &myPlaylist.duration);
    
    printf("\nSong Details:\n");
    printf("Title: %s\n", myPlaylist.title);
    printf("Artist: %s\n", myPlaylist.artist);
    printf("Duration: %.2f minutes\n", myPlaylist.duration);
    
    return 0;
}