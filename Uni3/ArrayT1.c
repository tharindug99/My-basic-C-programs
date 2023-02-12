#include <stdio.h>

int main(){

    int i,j;
    int marks[5];
    
    printf("Input the 5 elements to be stored in the Array -: ");
    

    for(i =0; i<5; i++){
        scanf("%d \n",marks[i]);
    }

    for(j =0; j<5; j++){
        printf("The entere values are %d \n",marks[i]);
    }


    return 0;
}