//This program finds check digit of EAN code. For more info "https://tr.wikipedia.org/wiki/European_Article_Number"
#include<stdio.h>

void main(){

     int firstSum, secondSum, total, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;

     printf("Enter the first 11 digits of EAN:");
     scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

     firstSum =  n2 + n4 + n6 + n8 + n10 + n12;
     secondSum = n1 + n3 + n5 + n7 + n9 + n11;
     total = 3 * firstSum + secondSum;

     printf("Check digit %d\n", 9 - ((total - 1) % 10));

     return 0;
}
