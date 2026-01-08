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
    
    printf("The Even elements are:\n");
    for (int i = 0; i < size; i++){
        
        if (array[i] % 2 == 0){
            printf("%d ", array[i]);
        }
    }
    
    printf("\nThe Odd elements are:\n");
    for (int i = 0; i < size; i++){
        
        if (array[i] % 2 != 0){
            printf("%d ", array[i]);
        }
    }
    
    return 0;
}