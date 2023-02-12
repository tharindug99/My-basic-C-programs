#include<stdio.h>

int squarer(int a);

int main(){

    int num,output;
    printf("Input any number for square -: ");
    scanf("%d",&num);

    output = squarer(num);
    
    printf("The square of %d is %d",num,output);

    return 0;
}

int squarer(int a){

    int answer = a*a;

    return answer;
}