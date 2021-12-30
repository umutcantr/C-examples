//This program prints a table of squares for given number. Ýn every 24 column program asks you to whether continue or not.
#include<stdio.h>


void main(){
    int i, n, product = 1;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    scanf("%hd", &n);
    getchar();

    for(i = 1; i <= n ; i++){
        printf("%10d%10d\n", i, i * i);
        if(i % 24 == 0){
            printf("Press enter to continue... ");
            getchar();
            }
        }

    return 0;
}
