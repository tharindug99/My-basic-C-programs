#include <stdio.h>

void swap(int *num1, int *num2)

{

    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("\n After Swapping is done");
    printf("\n Value of num1 is %d ", *num1);
    printf("\n Value of num2 is %d ", *num2);

}

int main(){

    int num1 , num2, *ptr1, *ptr2;
  


    printf("Enter two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    ptr1 = &num1;
    ptr2 = &num2;


    printf("\n Before Swapping is done");
    printf("\n Value of num1 is %d ", num1);
    printf("\n Value of num2 is %d ", num2);

    swap(ptr1, ptr2);

    return 0;
}

