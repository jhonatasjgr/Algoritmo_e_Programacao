#include <stdio.h>
int soma(int *x){
    int qtd=0;
    for(int i=0;i<20;i++){
        scanf("%d",&x[i]);
       qtd+=x[i];
    }
    return qtd;
}
int main()
{
    int x[20];
    printf("Soma dos elementos: %d",soma(x));

    return 0;
}