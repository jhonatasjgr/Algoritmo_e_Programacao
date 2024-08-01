#include <stdio.h>

int main(){
    
    int matriz[5][5];
    int fl=0,fc=4;
    int sumTot=0, sumLineFour=0,sumCOlTwo=0,diagPrincipal=0,diagSecunday=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++){
            scanf("%d",&matriz[i][j]);
            sumTot+=matriz[i][j];
            if(i==3) sumLineFour+=matriz[i][j];
            if(j==1) sumCOlTwo+=matriz[i][j];
            if(i==j) diagPrincipal+=matriz[i][j];
            if(i==fl && j==fc){
                diagSecunday+=matriz[i][j];
                fl++;
                fc--;
            } 
        }
        printf("\nSoma dos elemento da linha 4 = %d",sumLineFour);
        printf("\nSoma dos elementos da coluna 2 = %d",sumCOlTwo);
        printf("\nSoma dos elementos da diagonal principal = %d",diagPrincipal);
        printf("\nSoma dos elementos da diagonal secundaria = %d",diagSecunday);
        printf("\nSoma de todos os elementos da matriz = %d",sumTot);
        
    return 0;
}