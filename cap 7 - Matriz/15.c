#include <stdio.h>
int mod(int x){
    if(x<0) return x*-1;
    else return x;
}
int main(){
    
    int matriz[12][13], maiores[12];
    for(int i=0;i<12;i++){
        int maior = -9999;
        for(int j=0;j<13;j++){
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]>maior) maior = matriz[i][j];
        }
        maiores[i] = maior;
    }
    printf("\nMatriz original:\n");
    for(int i=0;i<12;i++){
        for(int j=0;j<13;j++) 
            printf("%d ",matriz[i][j]);
        printf("\n");
    }
    printf("\nMatriz modificada:\n");
    for(int i=0;i<12;i++){
        for(int j=0;j<13;j++)
            printf("%d ",matriz[i][j]*mod(maiores[i]));
        printf("\n");
}
    
    
    
    
    return 0;
}