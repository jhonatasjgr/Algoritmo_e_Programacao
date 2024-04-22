
#include <stdio.h>
//Lucro por preço
//preço = remove R$0,50 a cada iteração
//quantidade de ingresos vendidos = adc 26 a cada iteração
int main()
{
  float valorIngresso=5,qtdIngresso=120;
  const float despesa=200,desconto=0.50;
  
  while(valorIngresso>=1){
      printf("Valor do Ingresso = R$%.2f\n",valorIngresso);
      printf("Quantidade de ingressos vendidos = %.0f\n",qtdIngresso);
      printf("Valor arrecadado = R$%.2f\n",(valorIngresso*qtdIngresso));
      printf("Despesa = R$%.2f\n",despesa);
      printf("Lucro = R$%.2f\n",((valorIngresso*qtdIngresso)-despesa));
      printf("--------------------------------------------\n");
    valorIngresso-=desconto;
    qtdIngresso += 26;
    
  }

    return 0;
}
