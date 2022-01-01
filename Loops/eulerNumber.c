//This program prints calender.
#include<stdio.h>

void main(){

    double e = 1, factorialVal = 1;
    int  i, j, n;

    printf("Enter iteration number:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = i; j >= 1; j--){
            factorialVal *= j;
        }
        e = e + (1 / factorialVal);
        factorialVal = 1;
    }
    printf("e is %.25lf\n", e); // you can change "%.xlf" where x is represent how many character will seen after comma.

    return 0;
}
