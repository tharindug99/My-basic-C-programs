#include <stdio.h>

int main (){

    int num1;

    printf("Enter the number -: ");
    scanf("%d",&num1);

    printf("%d\n", num1>>2);
    printf("%d\n", num1<<2);
    printf("%d\n", ~num1);



    return 0;
}