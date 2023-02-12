#include<stdio.h>

int main(){

int num;

for(int i=1;i<4;i++){
    printf("\nC is fun!");

}
printf("\n");
 for(int j=1;j<6;j++){
        printf("\nWe can do everything with it!");
    }

printf("\n\nEnter the number of times needed to multiply: ");
scanf("%d", &num);

for(int k=0;k<num;k++){
    printf("\n%d x %d = %d",k,num,k*num);
}

return 0;
}
