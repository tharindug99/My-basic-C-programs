#include<stdio.h>
int main(){
    int num = 1;
    char room = 'A';

    for(int i = 0;i<10;i++){
        if(num == 8){
            num++;
            continue;
        }else{
            for(int  j = 1;j<6;j++){
                printf("%d%c\n", num,room);

                room = room + 1;

            }
            room = 'A';

            num = num + 1;
        }



    }
}
