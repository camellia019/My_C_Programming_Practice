#include<stdio.h>
#include<limits.h>

int secondMax(int size, int array[]){
    
    if (size < 2){
        return -1;
    }
    
    int largest = INT_MIN, secondLargest = INT_MIN;
    
        for (int i = 0; i < size; i++){
            if (largest < array[i]){
                secondLargest = largest;
                largest = array[i];
            }
            else if(array[i] > secondLargest && array[i] != largest){
                secondLargest = array[i];
            }
        }
    
    return secondLargest;

}

int main(){
    int size, array[100];
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    printf("Enter array values:\n");
    
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    
    if (size < 2){
        printf("Array is too small to have a second largest element.\n");
        return 0;
    }
    
    printf("The second largest element is: %d", secondMax(size, array));

    
    return 0;
}