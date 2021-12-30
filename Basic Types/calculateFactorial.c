// This project return factorial of entered number.
#include<stdio.h>

void main(){
    int number, i;
    long double factorial = 1.0;

    printf("Enter a positive integer:");
    scanf("%d", &number);

    i = number;

    for( i; i > 1; i--){
        factorial *= i;
    }

    printf("Factorial of %d: %Lf", number, factorial);
    return 0;
}
