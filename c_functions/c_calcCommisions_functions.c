#include<stdio.h>

float calcCommission(int type, float sales){
   
    if (type == 1) return sales * 0.07;
    else if (type == 2) return sales * 0.10;
    else if (type == 3) return sales * 0.12;
    else if (type == 4) return sales * 0.15;
    else return 0;
    
}

int main(){
    
    int type;
    float sales;
    
    printf("Enter type number (1-4): ");
    scanf("%d", &type);
    
    printf("Enter sales amount: P");
    scanf("%f", &sales);
    
    printf("Total calculated commission sales: P%.2f",calcCommission(type, sales));
    
    
    return 0;
    
}