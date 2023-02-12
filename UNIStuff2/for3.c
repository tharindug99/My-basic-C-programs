#include<stdio.h>

int main(){

    int i=1;

    while (i<=20/* condition */)
    {
        /* code */
        if(i % 2 == 1)
        {
            printf("%d\n",i);
        }
        
        i++;
    }
    
    return 0;
}