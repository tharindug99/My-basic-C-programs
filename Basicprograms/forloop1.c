#include <stdio.h>

void stars(){
    int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("*");
	printf("\n");
   }
}

void nums(){

int i,j,rows;

printf("Enter the number of rows -:");
scanf("%d", &rows);

for(i=1;i<=rows;i++){
    for(j=1;j<=i;j++)
        printf("%d",j);
    printf("\n");
}



}

void main()
{
    printf("Hiya!!!.....\n\n\n");
   //stars();
   nums();
}

