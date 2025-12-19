#include<stdio.h>

int countPrime(int size, int array[]){
    
    int isPrime; //true
    int count = 0;
    
    for (int i = 0; i < size; i++){
        
        isPrime = 1;
        
        if (array[i] <= 1){
            isPrime = 0;
        }
        
        for (int j = 2; j * j <= array[i]; j++){
            if (array[i] % j == 0){
                isPrime = 0; //false
                break;
            }
        }
        if (isPrime == 1){
            count++;
        }
    }
    return count;
    
}

int main(){
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int array[size];
    printf("Enter array values:\n");
    
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    
    printf("Number of prime numbers: %d",countPrime(size, array));
    
    return 0;
}