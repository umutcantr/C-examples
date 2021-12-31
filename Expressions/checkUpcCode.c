//This program checks UPC code. For more info "https://en.wikipedia.org/wiki/Universal_Product_Code"
#include<stdio.h>

void main(){

     int firstSum, secondSum, total, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;

     printf("Enter the first 11 digits of UPC:");
     scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

     firstSum =  n1 + n3 + n5 + n7 + n9 + n11;
     secondSum = n2 + n4 + n6 + n8 + n10;
     total = 3 * firstSum + secondSum;

     printf("Check digit %d\n", 9 - ((total - 1) % 10));

     return 0;

}
