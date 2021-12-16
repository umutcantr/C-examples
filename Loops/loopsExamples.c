#include<stdio.h>
#include<stdint.h>

void showLargestNumber(){
    float number, largest = 0;

    for(;;){
        printf("Enter a number:");
        scanf("%f", &number);

        if(number <= 0){
            break;
        }

        if(largest < number){
            largest = number;
        }
    }
    printf("The largest number entered was %f", largest);
}

void findGcd(){
    int n1, n2, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);


    while(n2 > 0){
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }

    printf("Greatest common divisor: %d ", n1);
}

void reduceFraction(){
    int num, denum, remainder, n1, n2;

    printf("Enter a fraction:");
    scanf("%d/%d", &num, &denum);

    n1 = num;
    n2 = denum;

    while(n2 > 0){
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }

    printf("In lowest terms: %d/%d ", num/n1, denum/n1);
}

void reverseNumber(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    do{
        printf("%d", number % 10);
        number /= 10;
    }while(number > 0 );
}

void showAllEvenSquares(){
    int number, i;

    printf("Enter a number:");
    scanf("%d", &number);

    for(i = 1; i*i <= number; i++){
        if((i*i) % 2 == 0){
            printf("%d\n", i*i);
        }
    }
}

void printCalender(){
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

void whichDateEarlier(){
    int m1, d1, y1, earliestM = 13, earliestD = 32, earliestY = 22;

    for(;;){
    printf("Enter a date (mm/dd/yy) : ");
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

}

void calculateE(){
    double e = 1, factorialVal = 1;
    int  i, j, n;

    printf("Enter iteration number:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = i; j >= 1; j--){
            factorialVal = factorialVal * j;
        }
        e = e + (1 / factorialVal);
        factorialVal = 1;
    }
    printf("e is %.65lf\n'\33'", e);
}


int main(){
    //showLargestNumber(); //Program that shows largest number in inputs.
    //findGcd();  // Program that shows greatest common divisor.
    //reduceFraction();  //Program that reduces fraction to lowest form.
    //reverseNumber(); //Program that reverses number.
    //showAllEvenSquares(); //Program that show all even square numbers.
    //printCalender();  //Program that prints calender interface.
    //whichDateEarlier();  //Program that shows earliest date.
    //calculateE();  //Program that calculates math constant e.
    int x= 0101;
    char c= 'A';
    uint8_t y =256;
    printf("%d", y);
}
