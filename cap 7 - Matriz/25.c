#include <stdio.h>

int main(){
    
    float precos[10];
    int qtdArma[5][10],total=0;// i= armazens  j=qtd dos produtos dos preços
    int iMai=0,jMai=0, iMen=0, jMen=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<10;j++){
            scanf("%f %d",&precos[j],&qtdArma[i][j]);
            total+=qtdArma[i][j];
            if(qtdArma[i][j]>qtdArma[iMai][jMai]){
                iMai = i;
                jMai = j;
            }
            if(qtdArma[i][j]<qtdArma[iMen][jMen]){
                iMen = i;
                jMen = j;
            }
        }
    for(int i=0;i<5;i++){
        int qtd=0;
        for(int j=0;j<10;j++)
            qtd+=qtdArma[i][j];
        printf("\nNo armazem %d tem %d quantidades",i+1,qtd);
    }
    printf("\nTem %d quantidades no total",total);
    printf("\nPreço do produto com maior estoque = R$%.2f",precos[jMai]);
    printf("\nMenor estoque = %d",qtdArma[iMen][jMen]);
    for(int i=0;i<5;i++){
        float custo=0;
        for(int j=0;j<10;j++)
            custo+=precos[i]*qtdArma[i][j];
        printf("\nCusto do armazem %d = %.2f",i+1,custo);
    }
    
    
    return 0;
}