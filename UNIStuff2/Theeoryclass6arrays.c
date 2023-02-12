#include <stdio.h>

int main(){

    int a[] = {12,14,55,48,65,4};

    for (int i = 0; i < 6; i++)
    {
        printf("The values of array a are  %d\n",a[i]);

    }

    int n;
    printf("Enter the number of subjects -: ");
    scanf("%d",&n);
    int marks[n],sum;;
    float avg;
    for (int j = 0; j < n; j++)
    {
        printf("Enter the marks for subject %d -:", j+1);
        scanf("%d",&marks[j]);
        sum += marks[j];
        avg = sum / n;
    }

    
    
    


    return 0;
}