#include<stdio.h>

void main(){

//mysum(5,6);

int z = mysum(4,5);
//int z = 4+5;
printf("\n%d", z);

}

int mysum(int a, int b){

printf("The sum is %d\n", a + b);

return (a + b);
}
