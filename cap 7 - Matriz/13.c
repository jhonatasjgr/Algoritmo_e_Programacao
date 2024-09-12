#include <stdio.h>

int main(){
    
    int matriz[6][4],maiores[6];
    for(int i=0;i<6;i++){
        int maior = -99999;
        for(int j=0;j<4;j++){
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]>maior) maior = matriz[i][j];
        }
        maiores[i]=maior;
    }
    printf("\nMatriz resultante:\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++)
            printf("%d ",matriz[i][j]*maiores[i]);
        printf("\n");
    }
    return 0;
}