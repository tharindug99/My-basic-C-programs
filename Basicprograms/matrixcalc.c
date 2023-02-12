#include <stdio.h>

int i,j,input1[10][10], input2[10][10],num_row_1,num_row_2,num_col_1,num_col_2;
int sum[10][10];


matrixadd(){

printf("\nThe sum of the matrices is \n");
for(i=1; i<=num_row_1;i++){
    for(j=1; j<=num_col_1; j++){

        sum[i][j] = input1[i][j] + input2[i][j];

        printf("%d \t",sum[i][j]);
    }
    printf("\n");
}


}

matrixsub(){

printf("\nThe difference of the matrices is \n");
for(i=1; i<=num_row_1;i++){
    for(j=1; j<=num_col_1; j++){

        sum[i][j] = input1[i][j] - input2[i][j];

        printf("%d \t",sum[i][j]);
    }
    printf("\n");
}


}

matrixmultiply(){

printf("\nThe product of the matrices is \n");
for(i=1; i<=num_row_1;i++){
    for(j=1; j<=num_col_1; j++){

        sum[i][j] = input1[i][j] * input2[i][j];

        printf("%d \t",sum[i][j]);
    }
    printf("\n");
}


}

matrixdivide(){

printf("\nThe  of the matrices is \n");
for(i=1; i<=num_row_1;i++){
    for(j=1; j<=num_col_1; j++){

        sum[i][j] = input1[i][j] / input2[i][j];

        printf("%d \t",sum[i][j]);
    }
    printf("\n");
}


}


void main(){



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

printf("You have entered:\n");
for(i=1; i<=num_row_1; i++){
    for(j=1; j<=num_col_1; j++){
        printf("%d \t",input1[i][j]);

    }
    printf("\n");
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

printf("You have entered:\n");
for(i=1; i<=num_row_2; i++){
    for(j=1; j<=num_col_2; j++){
        printf("%d \t",input2[i][j]);

    }
    printf("\n");
}
/*printf("The sum of the matrices is \n");
for(i=1; i<=num_row_1;i++){
    for(j=1; j<=num_col_1; j++){

        sum[i][j] = input1[i][j] + input2[i][j];

        printf("%d \t",sum[i][j]);
    }
    printf("\n");*/
matrixadd();

matrixsub();

matrixmultiply();

matrixdivide();
}







