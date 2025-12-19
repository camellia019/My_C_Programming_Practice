#include<stdio.h>

void listNComposite (int N){
    
    int i = 1;
    int startingNum = 4;
    int isComposite;
    
    
    while (i <= N){
        
        isComposite = 0;
        
        int factor = 2; 
        while(factor * factor <= startingNum){ // 2 < 4
            
            if (startingNum % factor == 0){
                isComposite = 1;
                break;
            }
            factor++;
        }
        
        if (isComposite == 1){
            printf("%d ", startingNum);
            i++;
        }
        
        startingNum++;
    }
}

int main(){
    int N;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("First %d composite Numbers:\n", N);
    listNComposite(N);

    return 0;
}