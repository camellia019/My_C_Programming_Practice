#include<stdio.h>

int main(){
    
    int size, insertValue, insertIndex;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");
    
    printf("Enter a value: ");
    scanf("%d", &insertValue);
    
    printf("Enter an index you want to insert: ");
    scanf("%d", &insertIndex);
    
    if (insertIndex < 0 || insertIndex > size){
        printf("Invalid! Out of range.\n");
        return 1;
    }
    
    for(int i = size; i > insertIndex; i--){
        arr[i] = arr[i - 1];
    }
    
    arr[insertIndex] = insertValue;
    size++;
    
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}