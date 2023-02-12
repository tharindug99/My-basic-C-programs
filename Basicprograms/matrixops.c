#include<stdio.h>
 int main(void){

  int x=0;
  int y=0;
  int p=0;
  int q=0;
  int A[10][10];
  int B[10][10];
  int M[10][10];
  int sum=0;
  int m=0;

   printf("Enter number of rows in A matrix:");
   scanf("%d",&x);
   printf("Enter number of columns in A matrix :");
   scanf("%d",&y);


   printf("\nEnter Matrix elements in A matrix:\n");

   for(int i=0; i<x; i++){

    for(int j=0; j<y; j++){

      printf("Enter elements[%d,%d]:",i,j);
      scanf("%d",&A[i][j]);
    }
   }

   printf("\nEnter number of rows in B matrix:");
   scanf("%d",&p);
   printf("Enter number of columns in B matrix :");
   scanf("%d",&q);



   printf("\nEnter Matrix elements in B matrix:\n");

   for(int i=0; i<p; i++){

    for(int j=0; j<q; j++){

      printf("Enter elements[%d,%d]:",i,j);
      scanf("%d",&B[i][j]);
    }
   }
    printf("\nA Matrix is:\n");


   for(int i=0; i<x; i++){

    for(int j=0; j<y; j++){

      printf("%d",A[i][j]);
    }
      printf("\n");


    }

    printf("\nB Matrix is:\n");


   for(int i=0; i<p; i++){

    for(int j=0; j<q; j++){

      printf("%d",B[i][j]);
    }
      printf("\n");


    }

    for(int i=0; i<x; i++){

        for(int j=0; j<q; j++){

            for(int m=0; m<p; m++){

                sum= sum+ A[i][m]*B[m][j];
            }
            M[i][j]=sum;
            sum=0;
        }
    }

 printf("\nMultiplication of two matrixes-\n");
   for(int i=0; i<x; i++){

    for(int j=0; j<q; j++){

        printf("%d  ",M[i][j]);
    }
    printf("\n");
   }

    return 0;
 }
