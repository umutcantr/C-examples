//Program that writes first name and surname shortened form.
#include<stdio.h>

#define SIZE_SURNAME (int) sizeof(surName) / sizeof(surName[0])

void main()
{
   char ch, firstName, surName[20] ;  //Surname must be max. 20 character.
   int i = 0;

   printf("Enter first and last name: ");

   firstName = getchar();
   while((ch = getchar()) != ' '){}

   while((ch = getchar()) != '\n')
   {
       surName[i] = ch;
       i++;
   }

   printf("You entered the name: ");
   for(i = 0; i < SIZE_SURNAME; i++)
   {
       if(surName[i] <= 65 || surName[i] >= 122 ) break;
       printf("%c", surName[i]);
   }

   printf(", %c.", toupper(firstName));

   return 0;
}
