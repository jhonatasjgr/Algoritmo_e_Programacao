#include <stdio.h>

int main(){
    int matrizUm[3][8],matrizDois[3][8], matrizSoma[3][8],matrizDiferenca[3][8];
    for(int i=0;i<3;i++)
        for(int j=0;j<8;j++)
            scanf("%d",&matrizUm[i][j]);
            
    for(int i=0;i<3;i++)
        for(int j=0;j<8;j++){
            scanf("%d",&matrizDois[i][j]);
            matrizSoma[i][j] = matrizUm[i][j]+matrizDois[i][j];
            matrizDiferenca[i][j] =  matrizUm[i][j]-matrizDois[i][j];
        }
    printf("\nMatriz resultante da soma: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<8;j++)
            printf("%d ",matrizSoma[i][j]);
        printf("\n");
    }
    printf("\nMatriz resultante da Diferença: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<8;j++)
            printf("%d ",matrizDiferenca[i][j]);
        printf("\n");
    }
    
        
    return 0;
}