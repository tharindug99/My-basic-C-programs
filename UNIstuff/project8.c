#include<stdio.h>

int main(){

    /* int a=5;

    
   printf("a=5 with + as suffix %d\n",a++);

    
    printf("a=5 with + as prefix %d\n",a--);

    
    printf("a=5 with - as suffix %d\n",++a);

   
    printf("a=5 with - as prefix %d\n",--a); */

    int x,y,z;
     
     x=5; 
     y =8;

     printf("++x is %d\n", ++x + y++);          //6  8

        printf("++x is %d\n", ++x + ++y);       // 7  9

    return 0;
}