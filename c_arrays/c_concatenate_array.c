#include<stdio.h>

int main(){
    int size1, size2;
    
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    
    printf("Enter the elements of the first array:\n");
    int array1[size1];
    
    for (int i = 0; i < size1; i++){
        scanf("%d", &array1[i]);
    }
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    printf("Enter the elements of the second array:\n");
    int array2[size2];
    
    for (int i = 0; i < size2; i++){
        scanf("%d", &array2[i]);
    }
    
    int concat[size1 + size2];
    
    for (int i = 0; i < size1; i++){
        concat[i] = array1[i];
    }
    
    for (int i = 0; i < size2; i++){
        concat[size1 + i] = array2[i];
    }
    
    printf("Concatenated array:\n");
    for (int i = 0; i < size1+size2; i++){
        printf("%d ", concat[i]);
    }
    
    return 0;
}