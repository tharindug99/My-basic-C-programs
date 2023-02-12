#include<stdio.h>

int main(){

    int x= 5, y =10, z;

     printf("x is  %d \n", x);

    
    printf("y is  %d \n", y);


    z = x;
    x = y;
    y = z;
    printf("x is now %d \n", x);

    
    printf("y is now %d \n", y);

    return 0;
}
