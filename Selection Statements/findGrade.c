//This program finds letter grade for given numerical grade.
#include<stdio.h>

void main(){

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
