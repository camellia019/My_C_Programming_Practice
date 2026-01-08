#include<stdio.h>

int main(){
    
    int size, count;
    int frequency[100];
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    int array[size];
    
    printf("Enter %d elements in the array:\n", size);
    
    for (int i = 0; i < size; i++){
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
        frequency[i] = -1; //set every number as unique
    }
    
    for (int i = 0; i < size; i++){
        
        count = 1; //count every number as 1 already (since it already appears 1)
        
        for (int j = i + 1; j < size; j++){
            
            if (array[i] == array[j]){
                count++; //if same number, count
                frequency[j] = 0; //it means it is not unique anymore (same number)
            }
        }
        
        frequency[i] = count;
    }
    
    printf("The frequency of all elements in the array are:\n");
    
    for (int i = 0; i < size; i++){
        
        if (frequency[i] != 0){
            printf("%d occurs %d times\n", array[i], frequency[i]);
        }
    }
    
    return 0;
}