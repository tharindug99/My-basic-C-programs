#include <stdio.h>


double length_conv(double x);
double weight_conv(double x);
double temp_conv(double x);

int main(void){

   int N;
   double x,input;
   char letter;

   printf("Enter number of conversions -:");
   scanf("%d",&N);

   while(N > 0){
      scanf("%lf" "%s", &x, &letter);
      if(letter == 'm'){
            length_conv(x);

      }
      else if(letter == 'g'){
            weight_conv(x);

      }
      else if (letter == 'c'){
            temp_conv(x);


      }
      N--;
   }
}

double length_conv(double x){

double feet = x*3.2808;
printf("%lf feet", feet);

return feet;
}

double weight_conv(double x){

double pounds = x*0.002205;
printf("%lf lbs", pounds);

return pounds;
}

double temp_conv(double x){

double celcius = 32 + x*1.8;
printf("%lf f", celcius);

return celcius;
}
