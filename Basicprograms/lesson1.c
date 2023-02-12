#include<stdio.h>

void main(){

int n;

printf("Enter the number -:");
scanf("%d", &n);

while(n!=0){                                                          //while function
    printf("\nYou have entered %d", n);
    n--;
}

do{
    printf("Why did you enter %d",n);
    n++;
}while (n<=12);







}
