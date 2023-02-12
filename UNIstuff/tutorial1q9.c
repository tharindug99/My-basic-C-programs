#include <stdio.h>

int main(){
    int principle, time, rate,simpinterest;

    printf("Enter the principle -: ");
    scanf("%d",&principle);
    printf("\nEnter the time in years -: ");
    scanf("%d",&time);
    printf("\nEnter the rate per annum -: ");
    scanf("%d",&rate);

    simpinterest = (principle*rate*time)/100;

    printf("\nThe simple interest is %d",simpinterest);


    return 0;
}