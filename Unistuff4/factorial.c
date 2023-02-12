#include<stdio.h>

int factorial(int a);

int main(){

    int num,fact;
    printf("Enter the number of the factorial required -: ");
    scanf("%d",&num);

    fact = factorial(num);

    printf("\nThe factorial is %d ",fact);

    return 0;
}

int factorial(int a){

    int answer;
    if(a == 0){
        return 1;
    }
    else if(a == 1){
        return 1;
    }
    else{
        return answer*factorial(a-1);
    }

    
}