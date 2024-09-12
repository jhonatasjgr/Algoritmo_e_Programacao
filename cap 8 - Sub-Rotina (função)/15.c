#include <stdio.h>
int qtd(int *x){
    int qtd=0;
    for(int i=0;i<15;i++){
        scanf("%d",&x[i]);
        if(x[i]%2==0) qtd++;
    }
    return qtd;
}
int main()
{
    int x[15];
    printf("Quantidade de pares: %d",qtd(x));

    return 0;
}