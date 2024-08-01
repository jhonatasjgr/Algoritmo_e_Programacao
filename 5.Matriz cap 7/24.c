#include <stdio.h>

int main(){
    
    int matriz[4][5],vet[]={0,0,0,0,0};
    for(int i=0;i<4;i++)
        for(int j=0;j<5;j++){
            scanf("%d",&matriz[i][j]);
            vet[j]+=matriz[i][j];
        }
        
    for(int i=0;i<5;i++)
        if(vet[i]>10) printf("\nSoma da coluna %d = %d",i+1,vet[i]);
        else printf("\nA soma da coluna %d é menor que 10",i+1);
    
    return 0;
}