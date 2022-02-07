/*****************************************************************
 *  This program converts entried 10 numbers to segment display  *
 *  form.                                                        *
 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 10
#define DIGIT_COLUMN_SIZE 4
#define MAX_SEGMENTS 7

/* Function Prototypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/* External Variables */
const int segment[MAX_DIGITS][7] = {{1, 1, 1, 1, 1, 1,},
                                    {0, 1, 1},
                                    {1, 1, 0, 1, 1, 0, 1},
                                    {1, 1, 1, 1, 0, 0, 1},
                                    {0, 1, 1, 0, 0, 1, 1},
                                    {1, 0, 1, 1, 0, 1, 1},
                                    {1, 0, 1, 1, 1, 1, 1},
                                    {1, 1, 1},
                                    {1, 1, 1, 1, 1, 1, 1},
                                    {1, 1, 1, 1, 0, 1, 1}};

char digits[DIGIT_COLUMN_SIZE][DIGIT_COLUMN_SIZE * MAX_DIGITS];


/*****************************************************************
 * main: Clear array with clear_digits_array function, read      *
 *       characters and send repeatedly process_digit function.  *
 *       and print array with print_digits_array function.       *
 ****************************************************************/
void main()
{
    char ch;
    int position = 1;

    clear_digits_array();
    printf("Enter a number: \n");

    while((ch = getchar()) != '\n' && position < MAX_DIGITS){
        if(ch >= 48 && ch <= 57){
            process_digit(ch - '0', position);
            position++;
        }
    }

    print_digits_array();
    system("pause");

    return 0;
}

/**********************************************************
 * clear_digits_array: Clear contents of array with blank *
 *       character.                                       *
 **********************************************************/
void clear_digits_array(void){
    for(int i = 0; i < DIGIT_COLUMN_SIZE; i++){
        for(int j = 0; j < DIGIT_COLUMN_SIZE * MAX_DIGITS; j++){
            digits[i][j] = ' ';
        }
    }
}

/**************************************************************
 * process_digit: Read numbers and store them in segmentation *
 *       form in digits array                                 *
 *************************************************************/
void process_digit(int digit, int position){

    for(int i = 0; i < MAX_SEGMENTS; i++){
        if(segment[digit][i]){
            switch(i)
            {
             case 0:
                 digits[0][4 * position - 3]='_';
                 break;
             case 1:
                 digits[1][4 * position - 2]='|';
                 break;
             case 2:
                 digits[2][4 * position - 2]='|';
                 break;
             case 3:
                 digits[2][4 * position - 3]='_';
                 break;
             case 4:
                 digits[2][4 * position - 4]='|';
                 break;
             case 5:
                 digits[1][4 * position - 4]='|';
                 break;
             case 6:
                 digits[1][4 * position - 3]='_';
                 break;
            }
        }
    }
}


/**********************************************************
 * print_digits_array: Print digits array contents.       *
 *       .                                                *
 **********************************************************/
void print_digits_array(void){
    for(int i = 0; i < DIGIT_COLUMN_SIZE; i++){
        for(int j = 0; j < DIGIT_COLUMN_SIZE * MAX_DIGITS; j++){
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}

