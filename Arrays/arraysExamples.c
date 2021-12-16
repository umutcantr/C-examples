#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>

#define SIZE (int) sizeof(digit_seen) / sizeof(digit_seen[0])
#define SIZE_INT (int) sizeof(intMatrix) / sizeof(intMatrix[0])
#define SIZE_GRADE (int) sizeof(gradeMatrix) / sizeof(gradeMatrix[0][0])
#define SIZE_NUMARRAY (int) sizeof(array) / sizeof(array[0])
#define SIZE_SURNAME (int) sizeof(surName) / sizeof(surName[0])
#define SIZE_ANAGRAM (int) sizeof(anagramCounter) / sizeof(anagramCounter[0])

#define SIZE_ROW 10
#define SIZE_COLUMN 10
#define DIR 4
void repdigit(){

    int digit_seen[10] = {0};
    int digit, i;
    long long n;

    while(1)
        {
        printf("\nEnter a number: ");
        scanf("%lld", &n);
        if(n == 0)
          break;


        while(n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Digit\t\t");
    for(i = 0; i < SIZE; i++){
            printf("%d\t",i);
    }
    printf("\n");

    printf("Occurrences:\t");
    for(i = 0; i < SIZE; i++){
        if(digit_seen[i] >= 0){
            printf("%d\t",digit_seen[i]);
        }
    }

    for(i = 0; i < SIZE; i++){
        digit_seen[i] = 0;
        }
}
    return 0;
}

void first40FibonacciNumbers()
{
    int fib_numbers[40] = {[0] = 0, [1] = 1}, i;

    for(i = 2; i < (int)sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++){
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }

    for(i = 0; i < sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++){
        printf("Number %d :%d\n", i, fib_numbers[i]);
    }

}

void sumOfRowsColumns()
{
    int i, j, intMatrix[5][5], number, sumOfRows[5], sumOfRow = 0, sumOfColumns[5] = {0};

    for(i = 0; i < 5; i++)
        {
        printf("Enter row %d:\n", i);
        for(j = 0; j < 5; j++)
            {
            scanf("%d", &number);
            intMatrix[i][j] = number;
            }
        }

        for(i = 0; i < 5; i++)
        {
        for(j = 0; j < 5; j++)
            {
            printf("%d\t", intMatrix[i][j]);
            }
            printf("\n");
        }


        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
                sumOfRow += intMatrix[i][j];
                sumOfColumns[i] += intMatrix[i][j];
            }
            sumOfRows[i] = sumOfRow;
            sumOfRow = 0;
        }

        printf("\nRow totals: ");
        for(j = 0; j < 5; j++){
                printf("%d\t" , sumOfRows[j]);
            }

        printf("\nColumn totals: ");
        for(j = 0; j < 5; j++){
                printf("%d\t" , sumOfColumns[i]);
            }
    }

    void grades()
{

    int row, column, gradeMatrix[5][5], number, totalScores[5] = {0}, totalQuizScores[5] = {0},  highestQuiz[5] = {0}, lowestQuiz[5] = {0};

    for(row = 0; row < SIZE_GRADE; row++)
        {
        printf("Enter student %d:\n", row+1);
        for(column = 0; column < SIZE_GRADE; column++)
            {
            scanf("%d", &number);
            gradeMatrix[row][column] = number;

            totalScores[row] += gradeMatrix[row][column];
            totalQuizScores[column] += gradeMatrix[row][column];

            if(gradeMatrix[row][column] > highestQuiz[row]){
                highestQuiz[row] = gradeMatrix[row][column];
            }
            if(gradeMatrix[row][column] < lowestQuiz[row]){
                lowestQuiz[row] = gradeMatrix[row][column];
            }
            }
        }

        for(row = 0; row < 5; row++){
               printf("\nTotal score of student %d: %d ", row + 1, totalScores[row]);
               printf("\nAverage score of student %d: %f\n ", row + 1, totalScores[row] / SIZE_GRADE );
            }

        for(row = 0; row < 5; row++){
               printf("\nAverage score of quiz %d: %d ", row + 1, totalQuizScores[row]);
               printf("\nHighest score of quiz %d: %d ", row + 1, highestQuiz[row]);
               printf("\nLowest score of quiz %d: %d \n ", row + 1, lowestQuiz[row]);
        }
        return 0;
}

void randomWalk(){

    char array[SIZE_ROW][SIZE_COLUMN];
    char ch = 'A';
    int remainder, prev_remaninder = 5,x = 0, y = 0, i, j, control = 0;

    srand((unsigned) time(NULL));

    for(i =0; i < SIZE_ROW; i++){
            for(j = 0; j < SIZE_COLUMN; j++){
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

        for(i = 0; i < 10; i++){
            for(j = 0; j < 10; j++){
                printf("%c\t", array[i][j]);
            }
            printf("\n\n");
        }
        return 0;
}

void phoneNumChanger()
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
}

void scrubbleGame(){

    char ch;
    int sum = 0, scrubbleArray[25] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,5,1,3,1,1,1,1,4,4,10};

    printf("Enter a word :");

  while ((ch = getchar()) != '\n')
{
    sum += scrubbleArray[toupper(ch) - 65];
}
   printf("Scrabble value %d", sum);
   return 0;
}

void printfName()
{
   char ch, firstName, surName[20] ;  //Surname should be max. 20 character.
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
    if(surName[i] <= 65 || surName[i] >= 122 )
        break;

    printf("%c", surName[i]);
   }
   printf(", %c.", toupper(firstName));

}

void wordReverseSentence()
{
    char array[50] , lastLetter, ch;
    int i = 0, j;

    printf("Enter a sentence: ");

    for(i = 0; i < 50; i++)
   {
       array[i] = ' ';
       printf("%c", array[i]);
   }

    while((ch = getchar()) != '?' )
    {
        array[i] = ch;
        i++;
    }
    lastLetter = getchar();


    i = 50;
    while(i >= 0)
    {
        //printf("burdayim %c\n", array[i]);
        if(array[i] == ' ')
        {
            j = i+1;
            //printf("burdayim if %c\n", array[i]);
            while(array[j] != ' ')
            {
                printf("%c", array[j]);
                j++;
            }
            printf("\t");
        }
        i--;
         if(i == 0)
        {
            //printf("burdayim if %c\n", array[i]);
            while(array[i] >= 65 && array[i] <= 122)
            {
                printf("%c", array[i]);
                i++;
            }
            break;
        }

    }
    return 0;
}

void caesarCipher()
{
    char msg[80], ch;
    int i, shiftAmount;

    for(i = 0; i<80; i++)
    {
        msg[i] = ' ';
    }

    printf("Enter message to be encrypted:");
    i = 0;
    while((ch = getchar()) != '.')
    {
        msg[i] = ch;
        i++;
    }
    msg[i] = '.';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftAmount);
    if(shiftAmount > 25 || shiftAmount < 0)
    {
        printf("Ýnvalid amount.");
        shiftAmount = 0;
    }

    printf("Encrypted message: ");
    i = 0;
    while(msg[i] != '.')
    {
        if(msg[i] >= 65 && msg[i] <= 90)  //For upper-case letter
        {
             msg[i] = ((msg[i] - 'A') + shiftAmount) % 26 + 'A';  //wrap-around
             printf("%c", msg[i]);
        }
        else if((msg[i] >= 97 && msg[i] <= 122))
        {
            msg[i] = ((msg[i] - 'a') + shiftAmount) % 26 + 'a';  //wrap-around
            printf("%c", msg[i]);
        }
        else
           printf("%c", msg[i]);
        i++;
    }
    printf(".");

    printf("\nDecrypted message: ");
    i = 0;
    while(msg[i] != '.')
    {
        if(msg[i] >= 65 && msg[i] <= 90)  //For upper-case letter
        {
             msg[i] = ((msg[i] - 'A') + (26 - shiftAmount)) % 26 + 'A';  //wrap-around
             printf("%c", msg[i]);
        }
        else if((msg[i] >= 97 && msg[i] <= 122))
        {
            msg[i] = ((msg[i] - 'a') + (26 - shiftAmount)) % 26 + 'a';  //wrap-around
            printf("%c", msg[i]);
        }
        else
           printf("%c", msg[i]);
        i++;
    }
    printf(".");

    return 0;
}

void anagramTester()
{
    char ch;
    int i = 0,  anagramCounter[25] = {0};

    printf("Enter first word: ");
    while((ch = getchar()) != '\n')
    {
        if(isalpha(ch))
            anagramCounter[tolower(ch) - 97]++;
    }

    i = 0;
    printf("Enter second word: ");
    while((ch = getchar()) != '\n')
    {
        if(isalpha(ch))
            anagramCounter[tolower(ch) - 97]--;
    }

    for(i = 0; i < SIZE_ANAGRAM; i++)
    {
        if(anagramCounter[i] != 0)
        {
            printf("The words are not anagrams. ");
            break;
        }
        else if(i == SIZE_ANAGRAM - 1 && anagramCounter[i] == 0)
             printf("The words are anagrams. ");
}
    return 0;
}


int main(){
    //repdigit();
    //first40FibonacciNumbers();
   //sumOfRowsColumns();
    //grades();
    //randomWalk();   // Randomly walks through alphabet in 10x10 array.
    //phoneNumChanger(); //Program that changes letter to number in phone number.
    //scrubbleGame(); // Scrubble game with array initalizer value
    //printfName();  // Program that writes first name and surname shortened form.
    //wordReverseSentence();
    caesarCipher();
    //anagramTester();

    return 0;

}
