/*
. Faça um programa que receba a idade e a altura de várias pessoas, 
calcule e mostre a média das alturas daquelas com mais de 50 anos. 
Para encerrar a entrada de dados, digite idade menor ou igual a zero.
*/
#include <stdio.h>

int main(){
    float alturas;
    int qtd=0,idade;
    do{
        float altura;
        scanf("%d %f",&idade,&altura);
        if(idade<=0)
            break;
        if(idade>50){
            alturas+=altura;
            qtd++;
        }
    }while(idade!=0);
    printf("Media alturas = %.1f",(alturas/qtd));
  

    return 0;
}
