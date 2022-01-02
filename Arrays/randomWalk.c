//This program randomly walks through alphabet in 10x10 array. Ýf no any direction to go program stops.
#include<stdio.h>
#include<time.h>

#define SIZE_ROW 10
#define SIZE_COLUMN 10
#define DIR 4


void main(){

    char array[SIZE_ROW][SIZE_COLUMN];
    char ch = 'A';
    int remainder, prev_remaninder = 5,x = 0, y = 0, i, j, control = 0;

    srand((unsigned) time(NULL));

    for(i =0; i < SIZE_ROW; i++)
    {
        for(j = 0; j < SIZE_COLUMN; j++)
        {
            array[i][j] = '.';
        }
    }

    while(ch >= 65 && ch <= 90)
    {
        remainder = rand() % DIR;

        switch(remainder){
        case 3:
            if(x > 1 && array[x-1][y] == '.')
               x--; //up
            control++;
            break;
        case 2:
            if(y > 1 && array[x][y-1] == '.')
               y--; //left
            control++;
            break;
        case 1:
            if(x < 9 && array[x+1][y] == '.')
              x++; //right
            control++;
            break;
        case 0:
            if(y < 9 && array[x][y+1] == '.')
              y++; //down
            control++;
            break;
        }

        if(array[x][y] == '.')
        {
              array[x][y] = ch;
              control = 0;
              ch++;
        }

       if(array[x][y+1] != '.' && array[x][y-1] != '.' && array[x+1][y] != '.'  && array[x-1][y] != '.'){
            break;
        }
    }

        for(i = 0; i < 10; i++)
        {
            for(j = 0; j < 10; j++)
            {
                printf("%c\t", array[i][j]);
            }
            printf("\n\n");
        }

        return 0;
}
