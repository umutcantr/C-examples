//This program finds greatest common divisor of entered two integers.
#include<stdio.h>

void main(){

    int n1, n2, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);


    while(n2 > 0){
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }
    // Gcd of two number is n1.

    printf("Greatest common divisor: %d ", n1);

    return 0;
}
