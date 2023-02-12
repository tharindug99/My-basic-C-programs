#include<stdio.h>
#include<stdlib.h>
int main()

{
FILE*fpoin1;

fpoin1=fopen("Z:\tng.txt","r");

char tex[50];

while(!feof(fpoin1)){
    fgets(tex,50,fpoin1);
    puts(tex);
}

fclose(fpoin1);




return 0;

}

