#include<stdio.h>

void findOutliers(int size, int array[]){
    
    double sum = 0, average;
    
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    average = sum / size;
    
    for (int i = 0; i < size; i++){
        if (average < array[i]){
            printf("%d ", array[i]);
        }
    }
    
}

int main(){
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    printf("Enter array values:\n");
    
    int array[size];
    
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    
    printf("Elements greater than average: ");
    findOutliers(size, array);
    
    
    return 0;
}