#include<stdio.h>

int main(){
    int rows1, columns1, rows2, columns2;
    int result[10][10], array1[10][10], array2[10][10];
    
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &columns1);
    
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &columns2);
    
    if (columns1 != rows2){
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }
    
    printf("\nEnter elements of the first matrix:\n");
    
    for (int i = 0; i < rows1; i++){
        for (int j = 0; j < columns1; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    
    printf("\nEnter elements of the second matrix:\n");
    
    for (int i = 0; i < rows2; i++){
        for (int j = 0; j < columns2; j++){
            scanf("%d", &array2[i][j]);
        }
    }
    
    for (int i = 0; i < rows1; i++){
        
        for (int j = 0; j < columns2; j++){
            result[i][j] = 0;
            
            for (int k = 0; k < columns1; k++){
                result[i][j] += array1[i][k] * array2[k][j];
            }
            
        }
    }
    
    printf("\n");
    printf("Product of the matrices:\n");
    
    for (int i = 0; i < rows1; i++){
        
        for (int j = 0; j < columns2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}