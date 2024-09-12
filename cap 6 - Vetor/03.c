#include <stdio.h>
int existProd(int codProdCli,int *code){
    for(int i=0;i<10;i++)
        if(codProdCli==code[i]) return 1;
    return 0;
}
void placeOrder(int codeProdCli,int qtd,int *quantity,int *code){
    int pos;
    for(int i=0;i<10;i++)
        if(codeProdCli==code[i]) pos = i;
    if(qtd<quantity[pos]) printf("Não temos estoque suficiente dessa mercadoria");
    else{ 
        quantity[pos] = quantity[pos] - qtd;
        printf("Pedido atendido. Obrigado e volte sempre");
    }
}
void mostrarCodeAndQuantity(int *code,int *quantity){
    for(int i=0;i<10;i++)
        printf("\nCode: %d   --   Quantity:%d",code[i],quantity[i]);
}
int main(){
    int code[10];
    int quantity[10];
    
    for(int i=0;i<10;i++)
        scanf("%d %d",&code[i],&quantity[i]);
    int codeCli,codProdCli,quantProdCli;
    while(scanf("%d %d %d",&codeCli,&codProdCli,&quantProdCli)){
        if(codeCli==0) break;
        if(existProd(codProdCli,code)==1) placeOrder(codProdCli,quantProdCli,quantity,code);
        else if(existProd(codProdCli,code)==0) printf("Código inexistente");
    }
    mostrarCodeAndQuantity(code,quantity);
    return 0;
}