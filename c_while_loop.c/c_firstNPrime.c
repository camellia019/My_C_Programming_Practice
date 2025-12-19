#include<stdio.h>

void firstNPrime(int N){
    
    int i = 1;
    int startNum = 2;
    int isPrime;
    
    while (i <= N){
        
        isPrime = 1;
        
        for (int f = 2; f * f <= startNum; f++){
            
            if (startNum % f == 0){
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1){
            printf("%d ",startNum);
            i++;
        }
        
        startNum++;
    }
    
}

int main(){
    int N;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("First %d Prime Numbers:\n", N);
    firstNPrime(N);

    return 0;
}