#include <stdio.h>

int main(){
    char nomes[10][5];
    
    int in=0,entre=0,qtdSup=0,pos=0;
    float sup=0;
    
    for(int i=0;i<5;i++){
        char nome[10];
        float preco;
        scanf("%s %f",nome,&preco);
        if(preco<50) in++;
        else if(preco<=100){
            nomes[i] = nome;
            pos++;
        }else{
            sup+=preco;
            qtdSup++;
        }
    }
    printf("\nA quantidade de produtos com preço inferior a R$ 50,00 = %d",in);
    printf("\nO nome dos produtos com preço entre R$ 50,00 e R$ 100,00 = ");
    for(int i=0;i<pos;i++)
        printf(" %s   ",nomes[i]);
    printf("\nA média dos preços dos produtos com preço superior a R$ 100,00 = %.1f",sup/qtdSup);
    

    return 0;
}