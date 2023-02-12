#include <stdio.h>

int main(){

    int arr1[100];
    int N, i;
    int * ptr = arr1;  //pointer to array   

    printf("Enter size of array -: ");
    scanf("%d",&N);

    printf("Enter values in array -: ");
    for (i = 0; i < N; i++)
    {
        // &ptr[i] is =~ to &arr[i]

        scanf("%d",&ptr[i]);
    }


    printf("Array elements are ");
    for (i = 0; i < N; i++)
    {
        printf("%d\n",i[arr1]);
        
    }
    



    return 0;
}