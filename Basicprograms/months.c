#include <stdio.h>

int main(){

enum months{jan,feb,mar,apr,may,jun,july,aug,sept,oct,nov,dec};
int month;

for(month = jan; month<=dec; month++)
    printf("%d \t", month+1);




return (0);
}
