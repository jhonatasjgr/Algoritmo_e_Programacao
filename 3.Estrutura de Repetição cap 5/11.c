
#include <stdio.h>

int main()
{
   int parcelas = 6, percentual = 3;
   float valor;
   scanf("%f",&valor);
   printf("Valor do carro a vista = R$ %.2f\n",(valor-(valor*20/100)));
   while(parcelas<=60){
       printf("--------------------------\n");
        printf("%d parcelas de R$ %.2f\n",parcelas,((valor+(valor*percentual/100))/parcelas));
        printf("Preço final = R$ %.2f\n",valor+(valor*percentual/100));
        
       percentual+=3;
       parcelas+=6;
   }

    return 0;
}
