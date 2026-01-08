#include<stdio.h>
#include<string.h>

struct Student{
    
    char name[50];
    int rollNumber;
    float grades[50];
};

int main(){
    
    struct Student student;
    
    double sum = 0;
    
    printf("Enter student name: ");
    fgets(student.name,sizeof(student.name),stdin);
    
    student.name[strcspn(student.name, "\n")] = '\0';
    
    printf("Enter number of subjects: ");
    scanf("%d", &student.rollNumber);
    
    for (int i = 1; i <= student.rollNumber; i++){
        printf("Enter grade %d: ", i);
        scanf("%f", &student.grades[i]);
        sum += student.grades[i];
    }
    
    double average = sum / (float) student.rollNumber;
    
    printf("\nStudent Details:\n");
    printf("Number of subjects taken: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Average Grade: %.2f\n", average);
    
    
    return 0;
}