#include<stdio.h>

int main(){

    int num, total = 0;
    int i = 0;
    printf("Enter the number upto which you need the sum of natural numbers -: ");
    scanf("%d",&num);
    do{
       total = i + total ;
       i++;
    }while (i <= num);
    
    printf("The total of 1st %d natural numbers is %d ",num,total);
    

    return 0;
}