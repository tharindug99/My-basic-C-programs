#include <stdio.h>

int main(){

    int a ,b,temp;
    int* p1;
    int* p2;

    printf("Enter two numbers - : ");
    scanf("%d %d",&a,&b);
    printf("At first a = %d and b = %d \n",a,b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("Now a = %d and b = %d ",a,b);

    return 0;
}