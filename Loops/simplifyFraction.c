//This program simplificate entered fraction with greatest common divisior.
#include<stdio.h>

void main(){

    int num, denum, remainder, n1, n2;

    printf("Enter a fraction:");
    scanf("%d/%d", &num, &denum);

    n1 = num;
    n2 = denum;

    while(n2 > 0){  // find greatest common divisor.
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }
    // Gcd of two number is n1.

    printf("In lowest terms: %d/%d ", num/n1, denum/n1);

    return 0;
}
