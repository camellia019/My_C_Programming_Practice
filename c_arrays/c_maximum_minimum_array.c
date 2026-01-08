#include<stdio.h>

int main(){
    
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    
    for (int i = 0; i < size; i++){
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    int max = array[0];
    int min = array[0];
    
    for (int i = 0; i < size; i++){
        
        if (max < array[i]){
            max = array[i];
        }
        
        if (min > array[i]){
            min = array[i];
        }
    }
    
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}