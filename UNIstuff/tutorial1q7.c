#include <stdio.h>

int main(){
    int sub1,total = 0;
    float average, perc;


    for(int i =1; i <= 5; i ++){
    printf("Enter marks for subject %d -: ", i);
    scanf("%d",&sub1);

    total = total + sub1;
    }

    average = (float)total/5;
    perc = (float)total/500*100;


    printf("Total is %d",total);
    printf("\naverage is %.2f",average);
    printf("\npercentage is %.2f",perc);

    return 0;
}