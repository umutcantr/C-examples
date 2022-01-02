//This program finds whether two entered words are anagrams.
#include<stdio.h>

#define SIZE_ANAGRAM (int) sizeof(anagramCounter) / sizeof(anagramCounter[0])

void main()
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
