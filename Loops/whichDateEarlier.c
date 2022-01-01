//This program prints earliest date for given multiple dates. Compares earliest(earliestM,earliestY,earliestD) values with date(m1,d1,y1) values.
#include<stdio.h>

void main(){

    int m1, d1, y1, earliestM = 13, earliestD = 32, earliestY = 22;

    for(;;){
    printf("Enter a date (mm/dd/yy)(\"0/0/0\" to terminate) : ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    if(m1 == 0 && d1 == 0 && y1 == 0){
        break;
    }

    if(earliestY > y1){
        earliestY = y1;
        earliestM = m1;
        earliestD = d1;
    }
    else if(earliestY == y1 && earliestM > m1){
        earliestY = y1;
        earliestM = m1;
        earliestD = d1;
    }
    else if(earliestY == y1 && earliestM == m1 && earliestD > d1){
        earliestY = y1;
        earliestM = m1;
        earliestD = d1;
    }
    }
    printf("%.2d/%.2d/%.2d is the earliest date", earliestM, earliestD, earliestY);

    return 0;
}
