#include <stdio.h>

int main(){

    int num_of_el,i;  
    int sum = 0;
    printf("Input he number of elements to be stored in the Array -: ");
    scanf("%d", &num_of_el);

    int arr1[num_of_el];

    printf("\nInput %d elements in the array\n",num_of_el);

    for(i = 0; i < num_of_el; i++){
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
        sum = sum + arr1[i];

    }

    printf("The sum is %d ",sum);

    return 0;
}