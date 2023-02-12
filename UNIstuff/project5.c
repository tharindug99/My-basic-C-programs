#include <stdio.h>

int main(){

    int a = 60;
    int b= 13;
    int c,d;

        c = a <<2;
        printf(" Value of c is %d  \n ",c);

        c= a >>2;
        printf(" Value of c is %d  \n ",c);

        d =~a;    // -61 = 1100 0011
         printf(" Value of c is %d  \n ",d);
        return 0;
}