#include<stdio.h>

int main(){
    int size, array[100], positions, temp;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array:\n");
    
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &positions);
    
    printf("Rotated Array: ");
    
    for (int i = 0; i < positions; i++){
        
        int temp = array[size - 1];
        
        for (int j = (size - 2); j >= 0; j--){
            array[j+1] = array[j];
        }
        array[0] = temp;
    }
    
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    
    
    return 0;
}