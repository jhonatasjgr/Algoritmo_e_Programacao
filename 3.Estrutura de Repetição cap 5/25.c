/*
. Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais,
conforme a tabela a seguir:
Tipo descrição rendimenTo mensal
1 Poupança 1,5%
2 Poupança plus 2%
3 Fundos de renda fixa 4%
Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido
e que calcule e mostre o rendimento mensal de acordo com o tipo do investimento. 
No final, o programa deverá mostrar o total investido e o total de juros pagos.
A leitura terminará quando o código do cliente digitado for menor ou igual a 0.
*/
#include <stdio.h>


int main(){
  int cod, tipo;
  float valor, totalInv,totalJur;
  do{
    scanf("%d %d %f",&cod,&tipo,&valor);
        if(cod<=0)
            break;
    if(tipo==1){
        printf("Rendimento mensal = R$%.2f\n",(valor*1.5/100));
        totalInv+=valor;
        totalJur+=valor*1.5/100;
    }else if(tipo==2){
        printf("Rendimento mensal = R$%.2f\n",(valor*2/100));
        totalInv+=valor;
        totalJur+=valor*2/100;
    }else if(tipo==3){
        printf("Rendimento mensal = R$%.2f\n",(valor*4/100));
        totalInv+=valor;
        totalJur+=valor*4/100;
    }
  }while(cod>0);
    printf("Total investido =  R$%.2f\n", totalInv);
    printf("Total de juros = R$%.2f\n", totalJur);
    
    return 0;
}
