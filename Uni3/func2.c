#include <stdio.h>

int add(int p, int q);

int main(){

    int a,b,c;
    printf("Enter 2 numbers -:");
    scanf("%d%d ", &a, &b);

    c = add(a,b);

    printf("Sum of %d and %d id %d",a,b,c);

    return 0;
}

int add(int p, int q){

    int result = p + q;
    return (result);
}