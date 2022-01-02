//This program prints how many times occurrence  each number (0-9) in entered number.
#include<stdio.h>

#define SIZE (int) sizeof(digit_seen) / sizeof(digit_seen[0])

void main()
{

    int digit_seen[10] = {0};
    int digit, i;
    long long n;

    while(1)
    {
        printf("\nEnter a number: ");
        scanf("%lld", &n);
        if(n == 0) break;

        while(n > 0)
        {
            digit = n % 10;
            digit_seen[digit]++;
            n /= 10;
        }

        printf("Digit\t\t");
        for(i = 0; i < SIZE; i++)
        {
            printf("%d\t",i);
        }
        printf("\n");

        printf("Occurrences:\t");
        for(i = 0; i < SIZE; i++)
        {
            if(digit_seen[i] >= 0) printf("%d\t",digit_seen[i]);
        }

        for(i = 0; i < SIZE; i++)
        {
            digit_seen[i] = 0;
        }
        }

    return 0;
}
