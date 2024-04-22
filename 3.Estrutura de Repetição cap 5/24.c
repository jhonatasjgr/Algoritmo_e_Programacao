/*
. Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
■■ para encerrar a entrada de dados, deve ser digitado o valor zero;
■■ para valores negativos, deve ser enviada uma mensagem;
■■ os valores negativos ou iguais a zero não entrarão nos cálculos.
*/
#include <stdio.h>


int main(){
    int maior=-1000,menor=1000;
    do{
        int n;
        scanf("%d",&n);
            if(n==0)
                break;
            if(n>0&&n>maior)
                maior=n;
            if(n>0&&n<menor)
                menor=n;
    }while(maior);
    printf("Maior = %d\nMenor = %d\n",maior,menor);
    
    return 0;
}
