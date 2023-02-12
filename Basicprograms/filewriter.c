#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fpointer;
char val[100];
fpointer = fopen("Z:\peer.txt","a");
printf(" Enter yo name -:");
scanf("%s", &val);


fprintf( \n fpointer,val);

fclose(fpointer);

return 0;

}
