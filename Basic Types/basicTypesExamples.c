#include<stdio.h>
#include<stdint.h>
#include<ctype.h>
#include<math.h>



void squareOfNumber()
{
    int i, n, product = 1;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    scanf("%hd", &n);
    getchar();

    for(i=1; i<=n ; i++){
        printf("%10d%10d\n", i, i * i);
        if(i % 24 == 0){
            printf("Press enter to continue... ");
            getchar();
            }
        }
    return 0;
}

void sumOfDoubles(){

    double n, sum = 0;

    printf("This program sums a series of integers. \n");
    printf("Enter integers (0 to terminate):");

    scanf("%lf", &n);

    while(n != 0){
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %f\n", sum);

    return 0;
}

void scrubbleGame(){

    char ch;
    int sum = 0;

    printf("Enter a word :");

  while ((ch = getchar()) != '\n')
    switch (toupper(ch)) {
      case 'D': case 'G':
        sum += 2; break;
      case 'B': case 'C': case 'M': case 'P':
        sum += 3; break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
        sum += 4; break;
      case 'K':
        sum += 5; break;
      case 'J': case 'X':
        sum += 8; break;
      case 'Q': case 'Z':
        sum += 10; break;
      default:
        sum++; break;
    }

  printf("Scrabble value %d", sum);

    return 0;
}

void usingSizeof(){

    printf("size of int %d\n",(int)  sizeof(int));
    printf("size of short %d\n",(int)  sizeof(short));
    printf("size of long %d\n",(int)  sizeof(long));
    printf("size of float %d\n",(int)  sizeof(float));
    printf("size of double %d\n",(int)  sizeof(double));
    printf("size of long double %d\n",(int)  sizeof(long double));

}

void addSubDivMultTwoFractions(){
    int num1, num2, denum1, denum2, result_num, result_denum;
    char processOperator;

    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d %c %d/%d",&num1, &denum1, &processOperator, &num2, &denum2);

    switch(processOperator){
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

void modifiedClosestFlight(){
    int hour, minute, totalMinute;
    char indicator;

    printf("Enter a 12-hour time:");
    scanf("%d:%d %c", &hour, &minute, &indicator);

    switch(toupper(indicator)){
        case 'P': hour += 12;
        break;
        case 'A':
        break;
    }

    totalMinute = 60 * hour + minute;

    if(totalMinute < 583){
            if((totalMinute - 480) < (583 - totalMinute)){
               printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.");
               }
            else{
               printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.");
               }
        }

    else if(totalMinute < 679){
            if((totalMinute - 583) < (679 - totalMinute)){
               printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.");
              }
            else{
               printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
               }
        }
    else if(totalMinute < 840){
            if((totalMinute - 679) < (840 - totalMinute)){
              printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
            }
            else{
              printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.");
            }
       }

    else{
        printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.");
    }

}

void hourTimeChanger(){
    int hour, minute;
    char indicator;

    printf("Enter a 12-hour time:");
    scanf("%d:%d %c", &hour, &minute, &indicator);

    if(hour <= 12 && minute < 60){
    switch(toupper(indicator)){
        case 'P': hour += 12;
        break;
        case 'A':
        break;
    }

     printf("Enter a 24-hour time:%d:%d", hour, minute);
    }

     return 0;
}

void howManyVowelHave(){
    char ch;
    int vowels = 0;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n'){

        ch = toupper(ch);

        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vowels++;
        }
    }
    printf("Your sentence contains %d vowels.", vowels);

    return 0;
}

/*void evaluateExpression(){
    char ch;
    float f;
    int vowels = 0;

    printf("Enter an expression: ");

    while(){

        printf("ch is %f \n", f);

    }
    printf("Your sentence contains %d vowels.", vowels);

    return 0;
}
*/

void averageWordLength(){

    char ch;
    int letterNumber = 0, spaceNumber = 0;

    printf("Enter a sentence: ");

     while((ch = getchar()) != '\n'){
            if(ch == ' '){
                spaceNumber++;
                printf("spacenumber %d\n", spaceNumber);
            }
            else{
                letterNumber++;
                printf("letterNumber %d\n", letterNumber);
            }
     }
     printf("Average word length: %f", (1.0 * letterNumber) / (spaceNumber + 1));

}

void squareRootOfNumber(){

    double number,y = 1, oldY = 0;

    printf("Enter a positive number:");
    scanf("%lf", &number);

    while(fabs(y - oldY) > .00001 && number > 0){
        oldY = y;
        y = (y + (number / y)) / 2;
    }

    printf("Square root: %lf", y);

    return 0;

}

void calculateFactorial(){

    int number, i = 0;
    long double factorial = 1.0;

    printf("Enter a positive integer:");
    scanf("%d", &number);

    i = number;

    for( i; i > 1; i--){
        factorial *= i;
    }

    printf("Factorial of %d: %L"
        , number, factorial);

}




int main(){
    //squareOfNumber();
    //sumOfDoubles();
    scrubbleGame();
    //usingSizeof();
    //addSubDivMultTwoFractions();  //program that calculates four process
    //modifiedClosestFlight();     //program that finds closest flight
    //hourTimeChanger();
    //howManyVowelHave();   // program that finds how many vowel in sentence.
      //evaluateExpression();
      //averageWordLength();
      //squareRootOfNumber();
      //calculateFactorial();



}
