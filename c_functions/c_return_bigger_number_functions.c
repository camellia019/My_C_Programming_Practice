#include<stdio.h>

int isBiggestNum(int num){
    int hundreds = num/100;
    int tens = num % 100 / 10;
    int ones = num % 10;
    
    if (hundreds >= tens && hundreds >= ones) return hundreds;
    else if (tens >= hundreds && tens >= ones) return tens;
    else if (ones >= hundreds && ones >= tens) return ones;
    else return ones;
}


int main(){
    
    int num;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    if (num < 100 || num > 999)
        printf("Please input a valid three-digit number!");
    
    else
        printf("The biggest number of %d is %d", num, isBiggestNum(num));
    
    return 0;
    
}