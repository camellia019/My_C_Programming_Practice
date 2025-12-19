#include<stdio.h>

void rowWiseSum (int row, int col, int array[row][col]){
    
    int rowSum;
    
    for (int i = 0; i < row; i++){
        
        rowSum = 0;
        
        for (int j = 0; j < col; j++){
            
                rowSum += array[i][j];
        }
        printf("%d ", rowSum);
    }
}

int main(){
    
    int row, col;
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    int array[row][col];
    
    printf("Enter the elements of the array:\n");
    
    for (int i = 0; i < row; i++){
        
        for (int j = 0; j < col; j++){
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("Row-wise sums: ");
    rowWiseSum(row, col, array);
    
    return 0;
}