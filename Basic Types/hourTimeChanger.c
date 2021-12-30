//This program changes given 12 hour clock to 24 hour clock.
#include<stdio.h>

void main(){

    int hour, minute;
    char indicator;

    printf("Enter a 12-hour time(hour:minute:indicator):");
    scanf("%d:%d:%c", &hour, &minute, &indicator);

    if(hour <= 12 && hour >= 0 && minute < 60 && minute >= 0 && (toupper(indicator) == 'A' || toupper(indicator) == 'P')){
    switch(toupper(indicator)){
        case 'P': hour += 12;
        break;
        case 'A':
        break;
    }

     printf("24-hour time:%.2d:%.2d", hour, minute);
    }

    else{
        printf("Wrong format.");
    }

     return 0;
}
