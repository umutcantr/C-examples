#include<stdio.h>
#include<stdbool.h>

void reverseTwoDigitNumber(){
    int number, b1, b2;

    printf("Enter two digit number:");
    scanf("%d", &number);

    b1 = number % 10;
    number /= 10;
    b2 = number % 10;

    printf("The reversal is: %d%d", b1, b2);

    return 0;
}

void reverseThreeDigitNumber(){
    int number, b1, b2, b3;

    printf("Enter three digit number:");
    scanf("%d", &number);

    b1 = number % 10;
    number /= 10;
    b2 = number % 10;
    number /= 10;
    b3 = number % 10;

    printf("The reversal is: %d%d%d", b1, b2, b3);

    return 0;
}

void reverseThreeDigitNumberWithScanf(){
     int b1, b2, b3;

     printf("Enter three digit number:");
     scanf("%1d%1d%1d", &b3, &b2, &b1);

     printf("The reversal is: %1d%1d%1d", b1, b2, b3);

     return 0;
}

void checkUPCCode(){
     int firstSum, secondSum, total, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;

     printf("Enter the first 11 digits of UPC:");
     scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

     firstSum =  n1 + n3 + n5 + n7 + n9 + n11;
     secondSum = n2 + n4 + n6 + n8 + n10;
     total = 3 * firstSum + secondSum;

     printf("Check digit %d\n", 9 - ((total - 1) % 10));

     return 0;
}

void checkEANCode(){
     int firstSum, secondSum, total, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;

     printf("Enter the first 11 digits of UPC:");
     scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

     firstSum =  n2 + n4 + n6 + n8 + n10 + n12;
     secondSum = n1 + n3 + n5 + n7 + n9 + n11;
     total = 3 * firstSum + secondSum;

     printf("Check digit %d\n", 9 - ((total - 1) % 10));

     return 0;
}

int main(){
    //reverseTwoDigitNumber();  //Program that reverses two digit number
    //reverseThreeDigitNumber();   //Program that reverses three digit number
    //reverseThreeDigitNumberWithScanf();  //Program that reverses three digit number with scanf
    //checkUPCCode();  //   Program that calculates check digit of UPC code
    //checkEANCode();   //   Program that calculates check digit of EAN code

    int  i=10, j =10 , k = 1;

    for(i = 0; j > 0; i++, j/= 2);


    return 0;
}
