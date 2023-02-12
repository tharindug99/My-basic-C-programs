#include <stdio.h>
int add(int *a , int *b){
    return (*a + *b);
}
int main(){
    
    int answer;
    int num1 = 3;
    int num2 = 2;

    answer = add(&num1, &num2);
    printf("%d\n",answer);

    return 0;
}