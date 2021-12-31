//This program reverses three-digit number with scanf function.
#include<stdio.h>

void main(){

     int b1, b2, b3;

     printf("Enter three digit number:");
     scanf("%1d%1d%1d", &b3, &b2, &b1);

     printf("The reversal is: %1d%1d%1d", b1, b2, b3);

     return 0;

}
