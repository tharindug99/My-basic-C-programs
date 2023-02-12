#include <stdio.h>
int swap(int p, int q);
int main(){
    int a,b;
    printf("Input 1st number -: ");
    scanf("%d",&a);
    printf("Input 2nd number -: ");
    scanf("%d",&b);
    printf("Before swapping n1 = %d, n2 = %d\n",a,b);
    swap(a,b);
    

    return 0;
}

int swap(int p, int q){
   
    
    int temp = p;
    p = q;
    q = temp;
    printf("After swapping n1 = %d, n2 = %d\n",p,q);
return (p,q);
}