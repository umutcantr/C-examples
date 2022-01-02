//This program reverse word queue in sentence.
#include<stdio.h>


void main()
{
    char array[50] , ch;
    int i = 0, j;

    printf("Enter a sentence: ");

    for(i = 0; i < 50; i++)  // clear sentence array.
    {
       array[i] = ' ';
    }

    array[0]= ' '; // first character should be space.


    i=1;
    while((ch = getchar()) != '?' )  // get the characters of sentence till question mark.
    {
        array[i] = ch;
        i++;
    }


    i = 50;
    while(i >= 0)  //go backwards in sentence array.
    {
        if(array[i] == ' ' && array[i-1] != ' ') // whenever finds a single space between letters print the word till next space.
        {
            j = i+1;
            while(array[j] != ' ')  // print word.
            {
                printf("%c", array[j]);
                j++;
            }
            printf(" ");
        }
        i--;

    }
    printf("?");

    return 0;
}
