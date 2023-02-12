#include <stdio.h>

int main (){
    int num1;
    printf("Enter the number -: ");
    scanf("%d",&num1);
    for(int i = 1; i <=10; i++){
        printf("%d\n",i*num1);
    }

    return 0;
}