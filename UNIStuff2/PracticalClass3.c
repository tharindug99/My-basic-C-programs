#include<stdio.h>

int main(){

    int num, i = 1,j;
    printf("Enter the number -: ");
    scanf("%d",&num);

    i = num;
    
    while(i>=1){
        j=i;
        printf("\n");
        while(j>=1){
            printf("%d",j);
            j--;
        }
        
        i=i-1;
    }
    return 0;
}