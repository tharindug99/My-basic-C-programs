#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fpointer;
char val[100];
fpointer = fopen("tharindu12.txt","w");
printf("Enter yo name -:");
gets(val);


fprintf(fpointer,val);

fclose(fpointer);

return 0;

}
