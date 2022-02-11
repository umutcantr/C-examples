// This program finds largest number in entered array.
// find_largest function returns adress of largest number.

#include <stdio.h>
#include <stdlib.h>

/*  Define  */
#define ARRAY_SIZE 5

/*  Function Prototypes  */
int *find_largest(int a[], int n);

int main()
{
    int a[ARRAY_SIZE];

    printf("Enter %d values:\n", ARRAY_SIZE);
    for(int i = 0; i < ARRAY_SIZE; i++){
        scanf("%d", &a[i]);
    }

    printf("Largest is: %d", *find_largest(a, ARRAY_SIZE));

    return 0;
}

int *find_largest(int a[], int n){
    int index = 0;

    for(int i = 0; i < ARRAY_SIZE; i++){
        if(a[i] > a[index]){
            index = i;
        }
    }
    return &a[index];
}

