#include<stdio.h>

void main(){

int input1[10][10],input2[10][10],num_row,num_col,i,j,product[10][10];


void product2000(){
printf("Product is \n");
for(int i=1; i<=num_col; i++){
    for(int j=1; j<=num_row; j++){
        product[i][j]=input1[i][j]*input2[i][j];
        printf("%d\t",product[i][j]);
    }
    printf("\n");
}

}

void add2000(){
printf("Sum is \n");
for(int i=1; i<=num_col; i++){
    for(int j=1; j<=num_row; j++){
        product[i][j]=input1[i][j]+input2[i][j];
        printf("%d\t",product[i][j]);
    }
    printf("\n");
}

}

void substract2000(){
printf("Difference is \n");
for(int i=1; i<=num_col; i++){
    for(int j=1; j<=num_row; j++){
        product[i][j]=input1[i][j]-input2[i][j];
        printf("%d\t",product[i][j]);
    }
    printf("\n");
}

}

void divide2000(){
printf("Division is \n");
for(int i=1; i<=num_col; i++){
    for(int j=1; j<=num_row; j++){
        product[i][j]=input1[i][j]/input2[i][j];
        printf("%d\t",product[i][j]);
    }
    printf("\n");
}

}

printf("Enter number of Rows  :");
scanf("%d",&num_row);

printf("Enter number of Cols  :");
scanf("%d",&num_col);

printf("Enter the elements of the first matrix  :\n");

for(i=1; i<=num_row; i++){
    for(j=1; j<=num_col; j++){
        printf("Enter element [%d,%d] :",i,j);
        scanf("%d",&input1[i][j]);

    }
}

printf("Enter the elements of the second matrix  :\n");

for(i=1; i<=num_row; i++){
    for(j=1; j<=num_col; j++){
        printf("Enter element [%d,%d] :",i,j);
        scanf("%d",&input2[i][j]);

    }
}

//product2000();
//add2000();
//substract2000();
//divide2000();

if(input1[i][j] = input2[i][j]){
    printf("Yes they are equal");
}
else{
    printf("no"); }
}

