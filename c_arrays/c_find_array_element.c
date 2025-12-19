#include<stdio.h>

int findNum (int size, int array[], int searchNum){
    
    for (int i = 0; i < size; i++){
        if (searchNum == array[i]){
            return i;
            break;
        }
        
    }
    return 0;
    
}


int main(){
    int num, searchNum;
    
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    
    printf("Enter the elements:\n");
    
    int array[num];
    for (int i = 0; i < num; i++){
        scanf("%d", &array[i]);
    }
    
    printf("Enter the value to search: ");
    scanf("%d", &searchNum);
    
    if (findNum(num, array, searchNum) == 0){
        printf("Value not found in array\n");
        return 0;
    }

    printf("Index of first occurrence of value in array: %d", findNum(num, array, searchNum));
    
    return 0;
}