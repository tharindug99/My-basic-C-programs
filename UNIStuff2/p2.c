#include<stdio.h>

int main(){
    int num1,num2;

    printf("Enter number 1 -: ");
    scanf("%d",&num1);
    printf("\nEnter number 2 -: ");
    scanf("%d",&num2);  

    if(num1 > num2){
        printf("\nnumber 1 is greater than mumber 2");
    }
     if(num1 < num2){
        printf("\nnumber 2 is greater than mumber 1");
    }
     if(num1 == num2){
        printf("\nnumber 1 is equal to mumber 2");
    }
}