// This program add two fractions with entries specified format.

#include<stdio.h>

void main(){
    int num1, num2, denum1, denum2, result_num, result_denum;

    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d+%d/%d",&num1, &denum1, &num2, &denum2);

    result_num = num1 * denum2 + num2 * denum1;
    result_denum = denum1 * denum2;

    printf("The sum is %d/%d",result_num, result_denum);
    return 0;
}
