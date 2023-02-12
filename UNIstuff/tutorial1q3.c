#include<stdio.h>

int main(){
int num1, num2;
    float div,num3,num4;

    printf("Enter the two numbers(enter one space when entering the second number) -:");
    scanf("%d %d",&num1,&num2);

    printf("The addition is %d\n", num1+num2);
    printf("The substraction is %d\n", num1-num2);
    printf("The multiplication is %d\n", num1*num2);
    printf("The quotient is %d\n", num1/num2);

    printf("The remainder is %d\n", num1 % num2);
    
    div = (float)num1/(float)num2;

    printf("The integer division is %f\n", div);
    
    
    return 0;

    }