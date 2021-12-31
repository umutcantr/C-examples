//This program reverses three-digit number.
#include<stdio.h>

void main(){

    int number, b1, b2, b3;

    printf("Enter three digit number:");
    scanf("%d", &number);

    while(number > 0 && number < 1000){  // number should be in 0-1000
        printf("%d",number % 10);
        number /= 10;
    }

    return 0;
}
