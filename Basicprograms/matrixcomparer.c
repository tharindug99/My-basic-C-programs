#include <stdio.h>

void main(){

int i,j,input1[10][10], input2[10][10],num_row_1,num_row_2,num_col_1,num_col_2;

printf("Enter number of Rows for matrix 1 :");
scanf("%d",&num_row_1);
printf("Enter number of Cols for matrix 1 :");
scanf("%d",&num_col_1);
printf("Enter matrix elements :\n");
for(i=1; i<=num_row_1; i++){
    for(j=1; j<=num_col_1; j++){
        printf("Enter element [%d,%d] :",i,j);
        scanf("%d",&input1[i][j]);

    }
}

printf("Enter number of Rows for matrix 2 :");
scanf("%d",&num_row_2);
printf("Enter number of Cols for matrix 2 :");
scanf("%d",&num_col_2);
printf("Enter matrix elements :\n");
for(i=1; i<=num_row_2; i++){
    for(j=1; j<=num_col_2; j++){
        printf("Enter element [%d,%d] :",i,j);
        scanf("%d",&input2[i][j]);

    }
}

if(num_col_1 == num_col_2 && num_row_1 == num_row_2){
    printf("Yes, the matrices can be compared ..\n");
}
else if(num_col_1 > num_col_2 && num_row_1 != num_row_2){
    printf("No, the matrices cannot be compared ..\n");
    printf("The number of columns in matrix 1 is larger than that of number of columns in matrix 2\n");

    if(num_row_1 > num_row_2){
    printf("The number of rows in matrix 1 is larger than that of number of rows in matrix 2");
    }
    else{
        printf("The number of rows in matrix 2 is larger than that of number of rows in matrix 1");
    }
}

else if(num_col_1 < num_col_2 && num_row_1 != num_row_2){
    printf("No, the matrices cannot be compared ..\n");
    printf("The number of columns in matrix 2 is larger than that of number of columns in matrix 1\n");

    if(num_row_1 > num_row_2){
    printf("The number of rows in matrix 1 is larger than that of number of rows in matrix 2");
    }
    else{
        printf("The number of rows in matrix 2 is larger than that of number of rows in matrix 1");
    }
}

}
