#include <stdio.h>

void nextDay(int day, int month, int year){
    int isLeapYear = (year % 400 == 0) || ((year % 100 != 0 && year % 4 == 0));

    if (day < 1 || day > 31 || (month < 1 || month > 12)){
        printf("Invalid Date!\n");
        return;
    }

    if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)){
        printf("Invalid Date!\n");
        return;
    }
    
    if (month == 2){
        if ((!isLeapYear && day > 28) || (isLeapYear && day > 29)){
            printf("Invalid Date!\n");
            return;
        }
        if ((!isLeapYear && day == 28) || (isLeapYear && day == 29)){
            day = 1;
            month++;
        }
        else{
            day++;
        }
        printf("Next day: %d/%d/%d", day, month, year);
        return;
           
    }

    else if (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)){
        day = 1;
        month++;
    }
    
    else if (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)){
        day = 1;
        month++;
    }

    else if (day == 31 && month == 12){
        day = 1;
        month = 1;
        year++;
    }

    else if (day == 31){
        day = 1;
        month++;
    }

    else{
        day++;
    }

    printf("Next day: %d/%d/%d", day, month, year);
}

int main(){
    int day, month, year;

    printf("Enter date: ");
    scanf("%d %d %d", &day, &month, &year);

    nextDay(day, month, year);

    return 0;
}