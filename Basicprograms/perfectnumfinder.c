#include <stdio.h>

void main(){

int i,j,num1,sum=0;

printf("Input the number -:");
scanf("%d",num1);

printf("The positive divisor is ");
for(i=1;i<=num1;i++){
        if(num1%i==0){
            sum = sum + i;
            printf("%d", i);
        }

            }

}
