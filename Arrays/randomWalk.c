//This program randomly walks through alphabet in 10x10 array. Ýf no any direction to go program stops.
#include<stdio.h>
#include<time.h>

#define SIZE_ROW 10
#define SIZE_COLUMN 10
#define DIR 4


void main(){

    char array[SIZE_ROW+2][SIZE_COLUMN+2];
    char ch = 'A';
    int remainder, x = 1, y = 1, i, j;  // x,y is coordinats.

    srand((unsigned) time(NULL));

    for(i =0; i < SIZE_ROW+2; i++)
    {
        for(j = 0; j < SIZE_COLUMN+2; j++)
        {
            array[i][j] = '.';
        }
    }

    while(ch >= 65 && ch <= 90)
    {
        remainder = rand() % DIR;

        switch(remainder){
        case 3:
            if(x > 2 && array[x-1][y] == '.') x--;
            break;
        case 2:
            if(y > 2 && array[x][y-1] == '.') y--;
            break;
        case 1:
            if(x < 11 && array[x+1][y] == '.') x++;
            break;
        case 0:
            if(y < 11 && array[x][y+1] == '.') y++;
            break;
        }

        if(array[x][y] == '.')
        {
              array[x][y] = ch;
              ch++;
        }

       if(array[x][y+1] != '.' && array[x][y-1] != '.' && array[x+1][y] != '.'  && array[x-1][y] != '.') break; // if no other direction to go break the loop.

    }


    for(i = 1; i < SIZE_ROW+1; i++)
    {
        for(j = 1; j < SIZE_COLUMN+1; j++)
        {
            printf("%c\t", array[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
