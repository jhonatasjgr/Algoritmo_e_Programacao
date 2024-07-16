/******************************************************************************
Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■■ todos os números pares;
■■ a quantidade de números pares;
■■ todos os números ímpares;
■■ a quantidade de números ímpares. 
*******************************************************************************/
#include <stdio.h>
int pares(int *v){
    int qtd=0;
    int tamanho = sizeof(v)-1;
    printf("Pares:");
    for(int i=0;i<tamanho;i++)
        if(v[i]%2==0) printf(" %d",v[i]);
    
    printf("\n");
    return qtd;
}
int impares(int *v){
    int qtd=0;
    int tamanho = sizeof(v)-1;
    printf("Impares:");
    for(int i=0;i<tamanho;i++)
        if(v[i]%2!=0) printf(" %d",v[i]);
    
    printf("\n");
    return qtd;
}
int main()
{
    int v[]={1,2,3,4,5,6,7};
    
    printf("%d pares\n",pares(v));
    printf("%d impares\n",impares(v));
    return 0;
}