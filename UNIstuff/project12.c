#include<stdio.h>

int main(){

    int marks=55,num;

    if (marks>=40){
        printf("Pass\n");
    }
    else{
        printf("Not Pass\n");
    }

    printf("\nEnter the number :");
    scanf("%d",&num);
    if (num % 2 == 0){
        printf("Number is even");
    }
    else{printf("odd");
    }

    int x;
    printf("\nEnter your age :");
    scanf("%d",&x);
     if (x >= 18){
        printf("You are an adult");
    }
    else{printf("You are a child");
    }


    return 0;
}