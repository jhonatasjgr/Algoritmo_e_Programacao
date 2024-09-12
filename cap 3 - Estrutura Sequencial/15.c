
#include <stdio.h>

int main()
{
   float sal, c1,c2;
   scanf("%f %f %f",&sal,&c1,&c2);
   printf("Salario após pagar contas = %.2f\n", (sal - (c1+((c1*2)/100)) - (c2+((c2*2)/100))));

    return 0;
}
