
#include <stdio.h>
#include <math.h>
int main()
{
   double R;
   const double PI = 3.14159;
   scanf("%lf",&R);
   printf("Comprimento = %.2f\n",(2*PI*R));
   printf("Area = %.2f\n", (PI*(R*R)));
   printf("Volume = %.2f\n",((3*PI*(R*R*R))/4));
   

    return 0;
}
