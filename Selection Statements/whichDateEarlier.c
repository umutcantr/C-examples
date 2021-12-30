//This program finds which date earlier from inputs.
#include<stdio.h>

void main(){

    int m1, d1, y1, m2, d2, y2;

    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if(y2 > y1){
        printf("%d/%d/%d earlier than %d/%d/%d ", m1, d1, y1, m2, d2, y2);
    }

    else if(y1 == y2){  // if years are equal

        if(m2 > m1){
            printf("%d/%d/%d earlier than %d/%d/%d ", m1, d1, y1, m2, d2, y2);
        }
        else if(m1 == m2){   // if months are equal

                if(d2 > d1){
                    printf("%d/%d/%d earlier than %d/%d/%d ", m1, d1, y1, m2, d2, y2);
                }
                else{
                    printf("%d/%d/%d earlier than %d/%d/%d ", m2, d2, y2, m1, d1, y1);
                }
        }
        else{
            printf("%d/%d/%d earlier than %d/%d/%d ", m2, d2, y2, m1, d1, y1);
        }
    }

    else{
        printf("%d/%d/%d earlier than %d/%d/%d ", m2, d2, y2, m1, d1, y1);
    }

    return 0;
}

