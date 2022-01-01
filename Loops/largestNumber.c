//This program finds largest number in inputs. Enter 0 to terminate.
#include<stdio.h>

void main(){

    float number, largest = 0;

    for(;;){
        printf("Enter a number:");
        scanf("%f", &number);

        if(number <= 0){
            break;
        }

        if(largest < number){
            largest = number;
        }
    }
    printf("The largest number entered was %f", largest);

    return 0;
}
