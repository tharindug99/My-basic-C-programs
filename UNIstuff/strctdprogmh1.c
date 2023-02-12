#include<stdio.h>

 int m=22, n=44;

int main(){

   printf("\nvalues:  m=%d  n=%d\n",m,n);
   
   int a = 50, b=80;
   int m=12, n=34;

   printf("All variables are accessible from the main function \n");
   printf("\nvalues:m=%d:n=%d:a=%d:b=%d \n",m,n,a,b);


    float f = 23.4; char er = 'e';

    printf("%f ,%c",f,er);

    const int LENGTH = 10;
    const int WIDTH = 12;
    const char NEWLINE = '\n';

    int area = LENGTH*WIDTH;

    printf("value of area :%d", area   );
    printf("%c", NEWLINE   );

    a = 10;
    b = 3;

    int radius = 10, height = 15;
    int areac = 3.14*radius*radius;
    int volume = 3.14*radius*radius*height;

    printf("Perimeter of a rectangle = %d", (a+b)*2 );
    printf("\n\nArea of a circle = %d ",areac);

    printf("\n\nvolume of cylinder = %d ",volume);


    return 0;
}