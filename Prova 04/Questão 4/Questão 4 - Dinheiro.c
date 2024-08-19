#include <stdio.h>

int main()
{
    int troco;
    int moedas[]={25,10,5,1};
    int qtd=0;
    scanf("%d",&troco);
    printf("Troco devido: %d\n",troco);
    for(int i=0;i<4;i++) //percorre a quantidade de moedas
        if(troco>=moedas[i]){
            qtd += troco/moedas[i];//pega a quantidade inteira 
            troco %=moedas[i];//diminui recebendo apenas o restante
        }
    printf("%d moeda(s)",qtd);

    return 0;
}