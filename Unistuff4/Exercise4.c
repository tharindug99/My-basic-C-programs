#include<stdio.h> //prime number finder

int main(){

    int num,count = 0;
    printf("Enter the number -:");
    scanf("%d",&num);

    for (int i = 1; i < num; i++)
    {
        if(num % i == 0){
            count++;
        }
        else{
            
        }
    }
    
    if (count <= 2)
    {
       printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
    


    return 0;
}