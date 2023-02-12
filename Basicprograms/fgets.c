#include <stdio.h>

int main(){

char name[20];
//printf("Enter name -:");
//fgets(name , 20 , stdin);
//printf("%s", name);

int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d",j);
	printf("\n");

}

return 0;
}
