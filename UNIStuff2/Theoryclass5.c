#include<stdio.h> //sum of natural numbers

int main(){

    int num,total = 0;
    printf("Enter the limit of namtural numbers you want to calculate -: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        total = total +i;
        
    }
    printf("%d\n",total);

    
    return 0;
}