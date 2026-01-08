#include<stdio.h>
#define PI 3.14159265359

typedef struct{
    float radius;
}Circle;

float calculateArea(Circle c){
    return PI * c.radius * c.radius;
}

int main(){
    
    Circle r;
    
    printf("Enter radius: ");
    scanf("%f", &r.radius);
    printf("Area: %.2f\n", calculateArea(r));
    
    return 0;
}