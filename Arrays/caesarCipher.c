//This program encrypt entered message till dot. After decrypt the message.
#include<stdio.h>


void main()
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
        printf("Invalid amount.");
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
