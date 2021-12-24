// This program reads your phone number with specified format and writes with.

#include<stdio.h>

void main(){
    int p1, p2, p3;

    testFormatSpecifiers();

    printf("Enter your phone number[(xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d",&p1, &p2, &p3);
    printf("You entered: %5.4d%.3d%.4d",p1, p2, p3);

    return 0 ;
}

void testFormatSpecifiers(){
    int test=546;

    printf("%d\n",test);
    printf("%4d\n",test); //should be 4 digit space.
    printf("%.4d\n",test);  //should be 4 digit number.
    printf("%6.5d\n",test); //should be 6 digit space, 5 digit number.

    return 0;
}
