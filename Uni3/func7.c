#include<stdio.h>
#include<conio.h>

int funct();

int main() {

    int result;

    result = funct();
    printf("\n Result = %d\n",result);
}

int funct(){
    int a,b,c;
    printf("Enter a value for a :");
    scanf("%d",&a);
    printf("Enter a value for b :");
    scanf("%d",&b);
    c = a+b;
    return(c);
}