/*****************************************************************
 *  This program implements game of crap. After win or loss      *
 * program asks continue or not (y/n). Ýf you answer "n" program  *
 * stops and prints win and loss numbers.                        *
 ****************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


#define DIR 6

int dice_roll(void);
bool play_game(void);


int main()
{
    int win = 0, lose = 0;

    srand((unsigned) time(NULL));

    char ch ;

    do{
        ch = '\n';
        if(play_game()) win++;
        else lose++;

        printf("Play again?\n");
        //fflush(stdin);                    // to clear input buffer.
        while(ch == '\n') ch = getchar();   // to clear input buffer. (details: https://www.geeksforgeeks.org/clearing-the-input-buffer-in-cc/)
     }
    while(toupper(ch) == 'Y');

    printf("Win:%d Lose:%d\n", win, lose);

    return 0;
}

/*****************************************************************
 * dice_roll: Generates two random number between 1-6. Returns   *
 *            sum of two number.                                 *
 ****************************************************************/
int dice_roll(void)
{
    int dice1 = (rand() % DIR)+1;
    int dice2 = (rand() % DIR)+1;

    return dice1 + dice2;
}

/**********************************************************************
 * play_game: This function states whether win or loss                *
 *            according to do dice_rool function returning number.    *
 *                                                                    *
 *********************************************************************/
bool play_game(void)
{
    int roll, point = 0, rollNumber = 0;

    while(1)
    {
        roll = dice_roll();
        printf("Your rolled:%d\n", roll);
        if(rollNumber == 0)
        {
            point = roll;
            printf("Your point is:%d\n", point);
        }
        if((roll == 7 | roll == 11) & rollNumber == 0)
        {
            printf("You win.\n");
            return true;
        }
        else if((roll == 2 | roll == 3 | roll == 12) & rollNumber == 0)
        {
            printf("You lose.\n");
            return false;
        }
        else if(roll == point & rollNumber != 0)
        {
            printf("You win.\n");
            return true;
        }
        else if(rollNumber != 0 & roll == 7)
        {
           printf("You lose.\n");
           return false;
        }
        rollNumber++;
    }
}
