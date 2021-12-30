// This program converts 24-hour time to 12-hour time.
#include<stdio.h>

void main(){

    int hour, minute;

    printf("Enter a 24-hour time:");
    scanf("%2d:%2d", &hour, &minute);

    if(hour >= 0 && hour <= 24 && minute >= 0 && minute < 60){

        if(hour >= 12){
            printf("Equivalent 12-hour time: %d:%.2d PM", hour - 12, minute);
        }
        else{
            printf("Equivalent 12-hour time: %.2d:%.2d AM", hour , minute);
        }
    }

    else{
        printf("Wrong format.");
    }

    return 0;
}
