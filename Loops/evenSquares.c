//This program finds even squares up to inputted number.
#include<stdio.h>

void main(){

    int number, i;

    printf("Enter a number:");
    scanf("%d", &number);

    for(i = 1; i*i <= number; i++){
        if((i*i) % 2 == 0){
            printf("%d\n", i*i);
        }
    }

    return 0;
}
