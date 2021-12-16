#include<stdio.h>


void writePhoneNumber(){
    int p1, p2, p3;

    printf("Enter your phone number[(xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d",&p1, &p2, &p3);
    printf("You entered: %4.4d.%.3d.%.4d",p1, p2, p3);

    return 0 ;
}

void addTwoFractions(){
    int num1, num2, denum1, denum2, result_num, result_denum;

    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d+%d/%d",&num1, &denum1, &num2, &denum2);

    result_num = num1 * denum2 + num2 * denum1;
    result_denum = denum1 * denum2;

    printf("The sum is %d/%d",result_num, result_denum);
    return 0;
}

void showNumbersAnyOrder(){
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;

    printf("Enter the numbers 1 to 16 in any order:");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10, &x11, &x12, &x13, &x14, &x15, &x16); //Example input: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

    printf("%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d\n", x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16);
    printf("Row sums: %d %d %d %d\n",x1+x2+x3+x4, x5+x6+x7+x8, x9+x10+x11+x12, x13+x14+x15+x16 );
    printf("Column sums: %d %d %d %d\n",x1+x5+x9+x13, x2+x6+x10+x14, x3+x7+x11+x15, x4+x8+x12+x16 );
    printf("Diaganol sums: %d %d\n",x1+x6+x11+x16, x4+x7+x10+x13);
    return 0;
}

int main(){
// writePhoneNumber();  // Program that writes phone number
   addTwoFractions(); // Program that adding two fractions
//   showNumbersAnyOrder(); // Program that writes numbers, row, column and digonal sums.

    return 0;
}
