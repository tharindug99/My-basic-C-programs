//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>

void getsum();
//void getavg(float,int);
//void display(float,float);

int main()
{
    getsum();

    return 0;
}


void getsum(){
     int start = 0, finalsum = 0, upperlimit;

    printf("Enter the amount of numbers -: ");
    scanf("%d", &upperlimit);

    while(start <upperlimit){
        start++;
        finalsum = start + finalsum;
        printf("Sum is %d\n",finalsum);
    }

    printf("\nTherefore the final Sum is %d \;\)",finalsum);


}
