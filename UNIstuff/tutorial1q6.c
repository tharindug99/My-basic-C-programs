#include <stdio.h>

int main (){
    int angle1,angle2;
    const int total_angle = 180;

    printf("Input value of angle 1 -: ");
    scanf("%d",&angle1);
    printf("\nInput value of angle 2 -: ");
    scanf("%d",&angle2);

    printf("\nthird angle is %d degrees", total_angle - angle1 -angle2);

    return 0;
}