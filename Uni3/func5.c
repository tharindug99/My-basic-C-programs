#include <stdio.h>

void fun(int x, int y[], char c[]);
int main(){

    int a = 20;
    int ar[5]={10,20,30,40,50};
    char str[30] = "geeksforgeeks";
    fun(a, &ar[0], &str[0]);


    return 0;
}

void fun(int a, int* ar, char *str ){
    int i;
    printf("value of a is %d\n\n",a);
    for (int i = 0; i < 5; i++)
    {
        /* code */printf("value of ar[%d] is %d\n",i,ar[i]);
    }
    printf("\nvalue of string is %s\n",str);
    
}