#include <stdio.h>

int main(){

    int x = 6, y=3, a =0;
    a =(--x, y+=x);
    printf("%d\n",a);

    int height = 10, base1 =20, base2 = 15;

    float area = height*(base1+base2)/2,r,h;

    printf("Area is %f ", area);

    float volume = 3.14 * r * h;

    return 0;
}