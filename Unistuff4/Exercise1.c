#include<stdio.h>

int evenoddchecker(int a);

int main(){

    int num;
    printf("Enter the number -: ");
    scanf("%d",&num);

    evenoddchecker(num);

    return 0;
}

int evenoddchecker(int a){

    if (a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }
    
    
    
    return 0;
}