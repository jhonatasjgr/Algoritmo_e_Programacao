#include <stdio.h>

int main(){
    
    int matriz[8][6], soma=0,qtd=0;
    for(int i=0;i<8;i++)
        for(int j=0;j<6;j++){
            scanf("%d",&matriz[i][j]);
            if(i%2==0){
                soma+=matriz[i][j];
                qtd++;
            }
        }
    printf("\nMédia dos elementos das linhas pares da matriz = %d\n",soma/qtd);
    return 0;
}