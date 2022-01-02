//This program finds scrubble value of entered word.
#include<stdio.h>

void main(){

    char ch;
    int sum = 0, scrubbleArray[25] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,5,1,3,1,1,1,1,4,4,10};

    printf("Enter a word :");

    while ((ch = getchar()) != '\n')
    {
        sum += scrubbleArray[toupper(ch) - 65];
    }

    printf("Scrabble value %d", sum);

    return 0;
}
