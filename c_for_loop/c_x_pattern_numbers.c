#include<stdio.h>

int main(){
    
    int rows, a = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &rows);
    
    for (int i = rows; i >= 1; i--, a++){
        
        for (int space = 1; space <= (rows - i); space++){
            printf(" ");
        }
        
        for (int j = 1; j <= (2 * i - 1); j++){
            
            if ( j == 1 || j == (2 * i - 1)){
                printf("%d", a);
            }
            else{
                printf(" ");
            }
            
            
        }
        
        
        printf("\n");
    }
    
    
    for (int i = 2, b = rows - 1; i <= rows; i++, b--){
        
        for (int space = 1; space <= (rows - i); space++){
            printf(" ");
        }
        
        for (int j = 1; j <= (2 * i - 1); j++){
            
            if (j == 1 || j == (2 * i - 1)){
                printf("%d", b);
            }
            else{
                printf(" ");
            }
            
        }
        
        printf("\n");
    }
    
    return 0;
}