#include<stdio.h>

typedef struct{
    
    int length;
    int width;
    
}Rectangle;

int calculatePerimeter(Rectangle r){
    
    return (2 * r.length) + (2 * r.width);
}

int main(){
    
    Rectangle rec;
    
    printf("Enter length: ");
    scanf("%d", &rec.length);
    
    printf("Enter width: ");
    scanf("%d", &rec.width);
    
    printf("Perimeter: %d\n",calculatePerimeter(rec));
    
    return 0;
}