#include <stdio.h>

int main(){
    
    float matriz[5][5],sumDiag=0;
    int lin=0,col=4;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++){
            scanf("%f",&matriz[i][j]);
            if(i==lin && j==col){
                sumDiag+=matriz[i][j];
                lin++;
                col--;
            }
        }
    printf("\nSoma dos elementos da diagonal secundaria = %.1f\n",sumDiag);
    
    return 0;
}