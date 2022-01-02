//This program converts entered capitalized letters to numerical phone numbers.
#include<stdio.h>

#define SIZE_NUMARRAY (int) sizeof(array) / sizeof(array[0])

void main()
{
    char array[15];
    int i;

    printf("Enter phone number: ");
    for(i = 0; i < SIZE_NUMARRAY; i++)
    {
        array[i] = getchar();

        if(array[i] >= 65 && array[i] <= 97)
        {
            switch(array[i]){
            case 'B': case 'C': case 'A':
            array[i] = 50; break;
            case 'F': case 'D': case 'E':
            array[i] = 51; break;
            case 'G':case 'H':case 'I':
            array[i] = 52; break;
            case 'J': case 'K':case 'L':
            array[i] = 53; break;
            case 'M': case 'N':case 'O':
            array[i] = 54; break;
            case 'P': case 'R':case 'S':
            array[i] = 55; break;
            case 'T': case 'U':case 'V':
            array[i] = 56; break;
            case 'W': case 'X':case 'Y':
            array[i] = 57; break;
            default:
             break;
        }
        }
    }

    printf("In numeric form: ");
    for(i = 0; i < SIZE_NUMARRAY; i++)
    {
        printf("%c", array[i]);
    }

    return 0;
}
