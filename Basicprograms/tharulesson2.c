#include<stdio.h>
#include<math.h>


void main(){

int num1;
printf("Enter any number -:");
scanf("%d", &num1);

int sqr = sqrt(num1);   //square root function

int cbr = cbrt(num1);  //cuberoot function

float sine = sin(num1); //sin function

// examples pow() cos() tan() log() exp() rand()
printf("The square root of the number %d is --> %d",num1,sqr);

printf(" \n\nThe cube root value of the number %d is --> %d",num1,cbr);

printf(" \n\nThe sine value of the number %d is --> %.2f",num1,sine);

}
