
#include <stdio.h>

int main()
{
   float dinheiro;
   scanf("%f",&dinheiro);
   printf("R$%.2f convertido em\n",dinheiro);
   printf("Dolar = %.2f\n",(dinheiro*1.8));
   printf("Marco alemão = %.2f\n",(dinheiro*2.0));
   printf("Libra Esterlina = %.2f",(dinheiro*3.57));

    return 0;
}
