// This program reduces a fraction to lowest form.

#include <stdio.h>
#include <stdlib.h>

/*  Function Prototypes  */
void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);
int gcd(int n1, int n2);

int main()
{
    int numerator, denominator, reduced_numerator, reduced_denominator;

    printf("Enter a fraction:");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator,
            &reduced_numerator,
            &reduced_denominator);

    printf("In lowest terms: %d/%d ", reduced_numerator, reduced_denominator);
    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator){

    int fraction = gcd(numerator, denominator);

    *reduced_numerator = numerator / fraction;
    *reduced_denominator = denominator / fraction;
}

int gcd(int n1, int n2){
    int remainder;

    while(n2 > 0){
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }                      // Gcd of two number is n1.

    return n1;
}
