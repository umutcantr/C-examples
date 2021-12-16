#include<stdio.h>

int findKthDigit(int, int ); // Program that finds k. th digit from the right.
double inner_product(double [], double [], int );
void pb(int);

int main()
{
    //printf("Digit is: %d",findKthDigit(89765, 4));
    //printf("Sum is: %f", inner_product((double []){1,1,1,1}, (double []){1,1,1,1,1}, 5));
    pb(3);


    return 0;
}


int findKthDigit( number,  position)
{
    int i = 0, digit = 0;
    for(i = 1; i < position; i++)
    {
        if(number == 0)
            return 0;

        number /= 10;
    }
    return number % 10;
}

double inner_product(double a[], double b[], int n)
{
    int i = 0;
    double sum = 0;

    for(i = 0; i < n; i++)
        sum += a[i] * b[i];

    return sum;
}

void pb(int n)
{
    if(n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
