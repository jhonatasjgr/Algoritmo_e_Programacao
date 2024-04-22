/*
Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
■ o lucro de cada ação comercializada;
■ a quantidade de ações com lucro superior a R$ 1.000,00;
■ a quantidade de ações com lucro inferior a R$ 200,00;
■ o lucro total da empresa.
Finalize com o tipo de ação ‘F’
*/
#include <stdio.h>

int main(){
    char acao='x';
    int qtdSuperior,qtdInferior;
    float lucro;
    
    do{
        float precoCompra,precoVenda;
        scanf("%c %f %f",&acao,&precoCompra,&precoVenda);
            if(acao=='F')
                break;
        printf("Lucro da ação %c = R$%.2f\n",acao,(precoVenda-precoCompra));
            if(precoVenda-precoCompra>1000)
                qtdSuperior++;
            if(precoVenda-precoCompra<200)
                qtdInferior++;
        lucro+=precoVenda-precoCompra;
    }while(acao);
    printf("quantidade de ações com lucro superior a R$ 1.000,00 = %d\n",qtdSuperior);
    printf("quantidade de ações com lucro inferior a R$ 200,00 = %d\n",qtdInferior);
    printf("lucro total da empresa = R$%.2f\n",lucro);

    return 0;
}
