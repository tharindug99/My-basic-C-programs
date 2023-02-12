#include<stdio.h>

int main(){

    int a = 20, b=30;

    int c;

    c = a & b;
    printf(" a AND B is %d\n",c);

    c = a | b;
    printf(" a OR B is %d\n",c);

    a = 26;

    c = a << 2;
    printf(" a << B is %d\n",c);

     c = a >> 2;
    printf(" a >> B is %d\n",c);


    return 0;
}