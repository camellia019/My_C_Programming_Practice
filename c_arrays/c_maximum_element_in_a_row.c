#include<stdio.h>

int main(){
    int rows, columns, maxresult[100];
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    
    printf("Enter the array elements:\n");
    
    int array[rows][columns];
    
    for (int i = 0; i < rows; i++){
        
        for (int j = 0; j < columns; j++){
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("The maximum elements per row are: ");
    
    for (int i = 0; i < rows; i++){
        
        int max = array[i][0];
        
        for (int j = 0; j < columns; j++){
            
            if (max < array[i][j]){
                max = array[i][j];
            }
        }
        maxresult[i] = max;
        
    }
    
    for (int i = 0; i < rows; i++){
        printf("%d ", maxresult[i]);
    }
    
    
    return 0;
}