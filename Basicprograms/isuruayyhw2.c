#include<stdio.h>

int main(){

int eng_pow,resis,weig,heig;
int num_of_robo,total_pow,final_pow;

printf("Enter the number of robots -:");
scanf("%d", &num_of_robo);

for(int total_pow=0 ,i=1;i<=num_of_robo;i++){
    printf("\nEnter the robot number %d height       :",i);
    scanf("%d",&heig);
    printf("\nEnter the robot number %d weight       :",i);
    scanf("%d",&weig);

    printf("\nEnter the robot number %d engine power :",i);
    scanf("%d",&eng_pow);
    printf("\nEnter the robot number %d resistance   :",i);
    scanf("%d",&resis);


    final_pow = (eng_pow + resis) * (weig - heig);


    total_pow = total_pow + final_pow ;

   printf("\n\nThe final power of %d robots is  %d Watts ", i,total_pow);
}







return 0;

}
