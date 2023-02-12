#include<stdio.h>

void main(){

int n;

printf("Enter the number -:");
scanf("%d", &n);

while(n!=0){                                                          //while function
    printf("\nYou have entered %d", n);
    n--;
}

printf("\n\n");

do{
    printf("\nWhy did you enter %d",n);                               //do while function
    n++;
}while (n<=12);







}
