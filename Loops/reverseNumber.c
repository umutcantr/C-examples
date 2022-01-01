//This program reverses entered number.
#include<stdio.h>

void main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    do{
        printf("%d", number % 10);
        number /= 10;
    }while(number > 0 );

    return 0;
}
