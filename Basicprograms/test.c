#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter Your Number : ");
    scanf("%d" , &a );
    switch(a%2)
    {
        case 0:
        printf("The given number is Even");
        break;
        
        
        case 1:
        printf("The given number is odd");
        break;
    }
}