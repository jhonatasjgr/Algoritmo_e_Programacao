
#include <stdio.h>
#include <math.h>
int main()
{
    //F = 180*(C + 32)/100
   double t;
  
   scanf("%lf",&t);
   printf("Temperatura em Fahrenheit = %.2f\n", (180*(t+32))/100);
   
   

    return 0;
}
