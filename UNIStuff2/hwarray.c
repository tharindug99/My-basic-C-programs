#include <stdio.h>

int main (){
    int arr1[3][4],sum;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the numbers -: \n");
            scanf("%d",arr1[i][j]);
            sum += arr1[i][j];
        }
        
    }
    
    printf("The sum is %d",sum);
    return 0;
}