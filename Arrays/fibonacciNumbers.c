//This program prints first 40 fibonacci numbers.
#include<stdio.h>


void main()
{
    int fib_numbers[40] = {[0] = 0, [1] = 1}, i;

    for(i = 2; i < (int)sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++)
    {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }

    for(i = 0; i < sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++)
    {
        printf("Number %d :%d\n", i, fib_numbers[i]);
    }

    return 0;
}
