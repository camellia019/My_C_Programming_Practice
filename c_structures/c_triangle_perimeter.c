#include<stdio.h>

typedef struct{
    
    float sideA;
    float sideB;
    float sideC;
    
}Triangle;

float calculatePerimeter (Triangle t){
    return t.sideA + t.sideB + t.sideC;
}

int main(){
    
    Triangle t;
    
    printf("Enter the lengths of the sides of the triangle\n");
    
    printf("Enter side A: ");
    scanf("%f", &t.sideA);
    
    printf("Enter side B: ");
    scanf("%f", &t.sideB);
    
    printf("Enter side C: ");
    scanf("%f", &t.sideC);
    
    printf("Perimeter: %.2f\n",calculatePerimeter(t));
    
    
    return 0;
}