#include <stdio.h>

int main()
{
   int qtdFaixas[]={0,0,0,0};
   float pesos[]={0,0,0,0};
   for(int i=1;i<=15;i++){
       int idade;
       float peso;
       scanf("%d %f",&idade,&peso);
       if(idade>=1&&idade<=10){
           qtdFaixas[0]++;
           pesos[0]+=peso;
       }else if(idade<=20){
            qtdFaixas[1]++;
            pesos[1]+=peso;
       }else if(idade<=30){
            qtdFaixas[2]++;
            pesos[2]+=peso;
       }else{
            qtdFaixas[3]++;
            pesos[3]+=peso;
       }
   }
   printf("Média de pessos de pessoas com idade entre 1-10 = %.1f\n",(pesos[0]/qtdFaixas[0]));
   printf("Média de pessos de pessoas com idade entre 11-20 = %.1f\n",(pesos[1]/qtdFaixas[1]));
   printf("Média de pessos de pessoas com idade entre 21-30 = %.1f\n",(pesos[2]/qtdFaixas[2]));
   printf("Média de pessos de pessoas com idade maior que 30 = %.1f\n",(pesos[3]/qtdFaixas[3]));
    return 0;
}
