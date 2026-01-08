#include<stdio.h>

int main(){
    
    int size, insertValue;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size+1];
    
    for (int i = 0; i < size; i++){
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    printf("Enter the value you want to insert: ");
    scanf("%d", &insertValue);
    
    printf("The existing array list is:\n");
    for (int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    

    //arrange in ascending order
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - i - 1; j++){
            
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    //find position
    int pos = size;
    
    for (int i = 0; i < size; i++){
        
        if (array[i] > insertValue){
            pos = i;
            break;
        }
    }
    
    //shift to the right
    for (int i = size; i > pos; i--){
        
        array[i] =  array[i-1];
    }
    //insert value
    array[pos] = insertValue;
    
    printf("\nAfter Insert the list is:\n");
    
    //printing of after insertion
    for (int i = 0; i < size+1; i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}