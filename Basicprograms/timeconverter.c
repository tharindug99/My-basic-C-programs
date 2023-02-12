#include <stdio.h>

void main(){

int ts,h,m,s;

printf("Enter the total number of seconds -:");
scanf("%d",&ts);

h = ts/3600;
ts = ts%3600;

m = ts/60;
s= ts%60;

printf("hours = %d\t minutes = %d\t seconds = %d",h,m,s);

}
