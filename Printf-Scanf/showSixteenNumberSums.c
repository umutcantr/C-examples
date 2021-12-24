// This program reads 16 variable and returns each row, column, diagonal sums. Example input: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

#include<stdio.h>
void main(){
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;

    printf("Enter the numbers 1 to 16 in any order:");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10, &x11, &x12, &x13, &x14, &x15, &x16);

    printf("%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d\n", x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16);
    printf("Row sums: %d %d %d %d\n",x1+x2+x3+x4, x5+x6+x7+x8, x9+x10+x11+x12, x13+x14+x15+x16 );
    printf("Column sums: %d %d %d %d\n",x1+x5+x9+x13, x2+x6+x10+x14, x3+x7+x11+x15, x4+x8+x12+x16 );
    printf("Diaganol sums: %d %d\n",x1+x6+x11+x16, x4+x7+x10+x13);

return 0;
}
