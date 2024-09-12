#include <stdio.h>

int main(){
    
    int v[10],qtdNeg=0,somaPos=0;
    
    for(int i=0;i<10;i++){
        scanf("%d",&v[i]);
        if(v[i]!=0 && v[i]<0) qtdNeg++;
        else somaPos+=v[i];
    }
    printf("\nQuantidade de negativos: %d",qtdNeg);
    printf("\nSoma dos positivos: %d",somaPos);
    
    return 0;
}