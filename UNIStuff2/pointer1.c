#include <stdio.h>
int main (){

    int i = 5;
    int *ptr1;

    ptr1 = &i;

    printf("i is %d \n", i);
    printf("*ptr1 = %d \n",*ptr1);
    printf("ptr is %d \n",ptr1);
    printf("%p\n",&i);
    printf("%x\n",ptr1);

    int var1;
    char var2[10];
    printf("Address of var1 variable is %x\n", &var1);
     printf("Address of var2 variable is %x\n", &var2);
    return 0;
}