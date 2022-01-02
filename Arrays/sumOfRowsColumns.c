//This program takes 5x5 matris as a input and prints row and column sums.
#include<stdio.h>


void main()
{
    int i, j, intMatrix[5][5], number, sumOfRows[5] = {0}, sumOfRow = 0, sumOfColumns[5] = {0};

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

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            sumOfRow += intMatrix[i][j];
            sumOfColumns[j] += intMatrix[i][j];
        }

        sumOfRows[i] = sumOfRow;
        sumOfRow = 0;
    }

    printf("\n\nRow totals: ");
    for(j = 0; j < 5; j++)
    {
        printf("\t%d\t" , sumOfRows[j]);
    }

    printf("\n\nColumn totals: ");
    for(j = 0; j < 5; j++)
    {
        printf("\t%d\t" , sumOfColumns[j]);
    }
    return 0;

}
