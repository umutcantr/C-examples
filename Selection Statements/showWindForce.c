// This program shows weather type for entered wind force.
#include<stdio.h>

void main(){

    int windForce;

    printf("Enter a wind speed (in knots):");
    scanf("%d", &windForce);

    if(windForce > 63){
        printf("Hurricane");
    }
    else if(windForce > 48){
        printf("Storm");
    }
    else if(windForce > 28){
        printf("Gale");
    }
    else if(windForce > 4){
        printf("Breeze");
    }
    else if(windForce > 1){
        printf("Light air");
    }
    else{
        printf("Calm");
    }

    return 0;
}
