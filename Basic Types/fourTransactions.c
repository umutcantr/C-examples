//This program calculates four transactions of 2 fractions.
#include<stdio.h>

void main(){

    int num1, num2, denum1, denum2, result_num, result_denum;
    char transactionOperator;
    printf("*************************************\n**Four transactions !use following commands\n*Addition:+\n*Substraction:-\n*Multiply:*\n*Divide:/\n*************************\n");
    printf("Enter two fractions separated by a process sign:");
    scanf("%d/%d %c %d/%d",&num1, &denum1, &transactionOperator, &num2, &denum2);

    switch(transactionOperator){
       case '+':
            result_num = num1 * denum2 + num2 * denum1;
            result_denum = denum1 * denum2;
            break;
       case '-':
            result_num = num1 * denum2 - num2 * denum1;
            result_denum = denum1 * denum2;
            break;
       case '*':
            result_num = num1 * num2 ;
            result_denum = denum1 * denum2;
            break;
       case '/':
            result_num = num1 *  denum2 ;
            result_denum = denum1 * num2;
            break;
       default:
            break;
            }

    printf("The sum is %d/%d",result_num, result_denum);

    return 0;
}
