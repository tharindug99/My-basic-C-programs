#include<stdio.h>

int main(){

    int farh,centi;



    printf("Enter the Centigrade value -:");
    scanf("%d", &centi);
    farh = (centi* 9/5) + 32;
    printf("The Farenheit value is %d", farh);

    return 0;

}
