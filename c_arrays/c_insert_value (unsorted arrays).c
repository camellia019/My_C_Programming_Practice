#include<stdio.h>

int main(){
    
    int size, insertValue, pos;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size+1];
    
    for (int i = 0; i < size; i++){
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    printf("Enter the value you want to insert: ");
    scanf("%d", &insertValue);
    
    printf("Enter the position where the value to be inserted: ");
    scanf("%d", &pos);
    
    printf("The current array list is:\n");
    for (int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    
    for (int i = size; i > pos; i--){
        array[i] = array[i-1];
    }
    
    array[pos] = insertValue;
    size++;
    
    printf("\nAfter Insertion:\n");
    
    for (int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    
    return 0;
}