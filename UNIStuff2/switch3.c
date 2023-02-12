#include<stdio.h>

int main (){

    int num1, num2;
    printf("Enter number 1 -: ");
    scanf("%d",&num1);
    printf("Enter number 2 -: ");
    scanf("%d",&num2);

    switch (num1 > num2)
    {
    case 1:
        printf("%d is larger than %d",num1,num2);
        break;
    case 0:
        printf("%d is larger than %d",num2,num1);
        break;

    }

    return 0;
}