#include <stdio.h>

int main(){

    int user_input[4], product = 1,i,temp;

    for (i = 0; i <= 1; i++)
    {
        printf(" Enter value %d -: ", i+1 );
        scanf("%d",&user_input[i]);
        if (user_input[i] = 0)
        {
           break;
        }
        
    }
    temp = user_input[i];
    product = product*temp;

    printf("Product is %d ", product);

    return 0;
}