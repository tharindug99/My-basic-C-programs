#include<stdio.h>

void main(){

int input[10][10],num_row,num_col,i,j;

printf("Enter number of Rows  :");
scanf("%d",&num_row);

printf("Enter number of Cols  :");
scanf("%d",&num_col);

printf("Enter matrix elements :\n");

for(i=1; i<=num_row; i++){
    for(j=1; j<=num_col; j++){
        printf("Enter element [%d,%d] :",i,j);
        scanf("%d",&input[i][j]);

    }
}

printf("Matrix is \n");
for(int k=1; k<=num_col; k++){
    for(int m=1; m<=num_row; m++){
        printf("%d\t",input[m][k]);
    }
    printf("\n");
}

}
