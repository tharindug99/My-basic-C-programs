#include<stdio.h>

int main(){

    int num, total =0;
    printf("Enter the number upto which you need the sum of natural numbers -: ");
    scanf("%d",&num);


    for(int i = 1; i <= num; i++){
        total = total + i;
    }
    printf("The sum is %d ",total);
    return 0;
}