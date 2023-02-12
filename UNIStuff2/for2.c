#include<stdio.h>

int main(){

    int i,j,k;
    for(i=0,j=0,k=0; i<4, k<8, j<10; i++ ){
     
        printf("%d %d %d\n",i,j,k);
        j+=2;
        k+=3;
    }
    return 0;
}