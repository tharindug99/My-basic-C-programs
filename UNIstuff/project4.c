#include<stdio.h>
#include<stdbool.h>
int main(){

    

   

    int a=60;   /* 60 is 0011 1100 */
    int b=13;       /* 13 is 0011 1101 */
    int c;

    c = a | b;                              /* 12 is 0000 1100 */
    printf("Value of c is %d\n",c);

    c = a & b;                          /* 61 is 0011 1100 */
    printf("Value of c is %d\n",c);   

    //bitxise XOR

    int d = 60 ;
    int e = 13;
    int f;

    f = d ^ e;

    printf("Line 3 - Value of C is %d\n ", f);

    return  0 ;
}