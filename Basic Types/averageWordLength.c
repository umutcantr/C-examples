//This project return average word length in entered sentence.
#include<stdio.h>

void main(){

    char ch;
    int letterNumber = 0, spaceNumber = 0;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n'){
            if(ch == ' '){
                spaceNumber++;
                //printf("spacenumber %d\n", spaceNumber);
            }
            else{
                letterNumber++;
                //printf("letterNumber %d\n", letterNumber);
            }
    }
    printf("Average word length: %f", ((float) letterNumber) / ((float) spaceNumber + 1));

    return 0;
}
