#include <stdio.h>

int main(){

    int num1;
    printf("Enter the number -: ");
    scanf("%d",&num1);

    switch( num1 % 2){

        case 0: {
        printf("Number is even");
        break;
        }
        default:  {
        printf("Number is odd");
        break;
        }
    }

    return 0;
}