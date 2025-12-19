#include<stdio.h>

int main(){
    char string[100], ch;
    int count = 0;
    
    printf("Enter a string: ");
    scanf("%s", string);
    
    printf("Enter a character to count: ");
    scanf(" %c", &ch);
    
    for (int i = 0; string[i]; i++){
        if (string[i] == ch){
            count++;
        }
    }
    printf("The character '%c' appears %d times in the string.\n", ch, count);
    
    return 0;
}