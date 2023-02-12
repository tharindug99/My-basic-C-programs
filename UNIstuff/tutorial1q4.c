#include<stdio.h>

int main(){
float radius;
const float pi = 3.14;
    
    printf("Enter the radius -: ");
    scanf("%f", &radius);

    printf("The diameter is %.2f\n", 2*radius);
    printf("The circumference is %.2f\n", 2*pi*radius);
    printf("The area is %.2f\n", pi*radius*radius);
    
    
    
    return 0;

    }