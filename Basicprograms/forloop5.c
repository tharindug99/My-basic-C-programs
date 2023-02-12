#include <stdio.h>

void main(){

int i,j,k,spc,row;

printf("Enter number of rows -:");
scanf("%d",&row);
spc = row+3;

for(i=1;i<=row;i++){

        for(j=spc*2-1; j>=1;j=j-2)
            {
                printf(" ");
            }


    for(k=1;k<=i*2-1; k++)
        printf("*");
    printf("\n");

    spc--;
    }
}


