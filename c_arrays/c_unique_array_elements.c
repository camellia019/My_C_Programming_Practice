#include<stdio.h>

int main(){
    int num, array[100], isSame;
    int i, j;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    
    printf("Enter the elements of the array:\n");
    
    for (int i = 0; i < num; i++){
        scanf("%d", &array[i]);
    }
    
    printf("Unique Elements: ");
    
    for (int i = 0; i < num; i++){
        
        isSame = 0;
        
        for (int j = 0; j < i; j++){
            
            if (array[i] == array[j]){
                isSame = -1;//found same
                break;
            }
            
        }
        if (isSame == 0){
            printf("%d ", array[i]);
        }
            
    }
    
    printf("\n");
    
    return 0;
}