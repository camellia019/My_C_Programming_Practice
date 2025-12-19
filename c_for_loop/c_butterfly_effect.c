#include<stdio.h>

int main(){
    int row;
    
    printf("Enter size: ");
    scanf("%d", &row);
    
    for (int i = 1; i <= (row/2) + 1; i++){
        
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        
        for (int space = 0; space < 2 * ((row /2) + 1 - i); space++){
            printf("  ");
        }
        
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        
        
        printf("\n");
    }
    
    for (int i = ((row /2 ) + 1) - 1; i >= 1; i--){
        
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        
        for (int space = 0; space < 2 * ((row /2) + 1 - i); space++){
            printf("  ");
        }
        
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}