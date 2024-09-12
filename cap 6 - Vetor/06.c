#include <stdio.h>

int main(){
    
    float totalVendas[10],totalComissao[10];
    char nomes[15][10];
    char nome[15];
    for(int i=0;i<10;i++)
        scanf("%f %f %s",&totalVendas[i],&totalComissao[i],nomes[i]);
    printf("\n-------RELATÓRIO-------");
    
    int maior=0;
    int menor=0;
    for(int i=0;i<10;i++){
        printf("\n---------------------");
        printf("\nVendedor: %s",nomes[i]);
        printf("\nTotal de vendas: %.0f",totalVendas[i]);
        printf("\nComissão: %.2f",(float)(totalVendas[i]*100/totalComissao[i]));
        if((totalVendas[i]*100/totalComissao[i])>maior) maior = i;
        if((totalVendas[i]*100/totalComissao[i])<menor) menor =i;
    }
    printf("\nMaior Comissão é de %s e receberá %.2f",nomes[maior],(float)(totalVendas[maior]*100/totalComissao[maior]));
    printf("\nMaior Comissão é de %s e receberá %.2f",nomes[menor],(float)(totalVendas[menor]*100/totalComissao[menor]));
        
    return 0;
}