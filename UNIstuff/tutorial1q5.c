#include <stdio.h>

int main(){

    float num1;

    printf("Enter the value in cm -: ");
    scanf("%f",&num1);

    printf("Value in meter is %.2f m \n", num1/100);
    printf("Value in kilometer is %.2f km", num1/100000);

    return 0;
}