//This program finds largest number for inputs.
#include<stdio.h>

void main(){

   int n1, n2, n3 ,n4 ,largest;

   printf("Enter four integer number with space:");
   scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

   if(n1 > n2 && n1 > n3 && n1 > n4){
    largest = n1;
   }
   else if(n2 > n1 && n2 > n3 && n2 > n4){
    largest = n2;
   }
   else if(n3 > n1 && n3 > n2 && n3 > n4){
    largest = n3;
   }
   else if(n4 > n1 && n4 > n3 && n4 > n2){
    largest = n4;
   }
   printf("Largest: %d", largest);

   return 0;
}
