#include <stdio.h>

int fact(int);

int main(){

    int b = fact(6);
    printf("Value of factorial of 6 is %d ",b);

    return 0;
}

int fact(int m){

    int ans;

    if (m == 0)
    {
        ans = 1;
    }
    else
    {
        ans = m * fact(m-1);
    }
    
    return ans;
    
}