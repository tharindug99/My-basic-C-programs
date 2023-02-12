#include <stdio.h>

int main(){

    int n[10];
    int i,j;

    for(i = 0; i <10; i++){
        n[i] = i + 100;
        printf("Element[%d] = %d \n", i,n[i]);
    }

    for(j = 0; j <10; j++){
       // printf("Element[%d] = %d \n", j ,n[j]);
        
    }


    return 0;
}