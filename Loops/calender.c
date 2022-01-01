//This program prints calender.
#include<stdio.h>

void main(){

    int days, startOfMonth, i;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat) ");
    scanf("%d", &startOfMonth);
    printf("\n\n");

    for(i = 1; i < startOfMonth; i++){
        printf("\t");
    }


    for(i = 1; i <= days; i++){
        printf("%d\t",i);

        if ((startOfMonth + i - 1) % 7 == 0)
            printf("\n");
    }
    printf("\n\n");

   return ;
}
