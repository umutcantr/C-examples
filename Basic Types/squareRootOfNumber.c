// This project return square root of entered number with newton method.
#include<stdio.h>

void main(){

    double number, y = 1, oldY = 0;

    printf("Enter a positive number:");
    scanf("%lf", &number);

    while(fabs(y - oldY) > .00001 && number > 0){
        oldY = y;
        y = (y + (number / y)) / 2;
    }

    printf("Square root of %d : %lf",(int) number , y);

    return 0;
}
