#include<stdio.h>

void timeChanger(){
    int hour, minute;

    printf("Enter a 24-hour time:");
    scanf("%2d:%2d", &hour, &minute);

    if(hour > 12){
        printf("Equivalent 12-hour time: %d:%d PM", hour - 12, minute);
    }
    else{
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hour , minute);
    }

    return 0;
}

void showWindForce(){
    int wind;

    printf("Enter a wind speed (in knots):");
    scanf("%d", &wind);

    if(wind > 63){
        printf("Hurricane");
    }
    else if(wind > 48){
        printf("Storm");
    }
    else if(wind > 28){
        printf("Gale");
    }
    else if(wind > 4){
        printf("Breeze");
    }
    else if(wind > 1){
        printf("Light air");
    }
    else{
        printf("Calm");
    }

    return 0;
}

void findLargestNumberOfFourIntegers(){
   int n1, n2, n3 ,n4 ,largest, smallest;

   printf("Enter four integer number:");
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
}

void closestFlight(){
    int hour, minute, totalMinute;

    printf("Enter a 24-hour time:");
    scanf("%d:%d", &hour, &minute);

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

void whichDateEarlier(){
    int m1, d1, y1, m2, d2, y2;

    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if(y2 > y1){
        printf("%d/%d/%d earlier than %d/%d/%d ", m1, d1, y1, m2, d2, y2);
    }
    else if(y1 == y2){
        if(m1 > m2){
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

void convertGrade(){
   int grade;

   printf("Enter numerical grade: ");
   scanf("%d", &grade);

   if(grade > 100 || grade < 0){
       printf("Illegal grade");
       return;
   }

   switch(grade/10){
      case 10:  printf("Letter grade: A");
      break;
      case 9: printf("Letter grade: A");
      break;
      case 8: printf("Letter grade: B");
      break;
      case 7: printf("Letter grade: C");
      break;
      case 6:  printf("Letter grade: D");
      break;
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
      case 0: printf("Letter grade: F");
      break;
      }

      return 0;
}


int main(){
    //timeChanger();   //Program that change 24-hour to 12-hour form
    //showWindForce();  //Program that shows wind force
    //findLargestNumberOfFourIntegers();
    //closestFlight();
    //whichDateEarlier();

    convertGrade();

     return 0;
}
