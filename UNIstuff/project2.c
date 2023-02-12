#include <stdio.h>
#include<limits.h>
int main(){

    char ch = 'A';
    char str[20] = "fresh2refresh.com";
    float flt = 10.234;
    int no = 50;

    double dbl = 20.123456;

    printf("Character is %c\n",ch);
    printf("String is %s\n",str);
    printf("Integer value is %d\n",no);
    printf("Float is %f\n",flt);
    printf("Double is %lf\n",dbl);
    printf("Octal is %c\n",no);
    printf("Hexadecimal is %x\n",no);

    printf("size of int is %d\n", sizeof(int));
    printf("size of char is %d\n", sizeof(char));
    printf("size of double is %d\n", sizeof(double));
    printf("size of long is %d\n", sizeof(long));
    
    




}