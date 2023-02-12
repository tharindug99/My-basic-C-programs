#include <stdio.h>

void function(int, int[3]);

int main (){

    printf("function call 1\n");
    int a = 20;
    int ar[3] = {10, 20, 30,};
    function(a, ar);

    printf("function call 2\n");
    int b = 1;
    int count[3] = {100,2,13};
    function(b, count);

    void function(int a , int ar[]) ;{
        int i;
        printf("value of a is %d\n",a);
        for ( i = 0; i < 3; i++)
        {
            printf("value of ar[%d] is %d", i, ar[i]);
        }
        
    }






    return 0;
}