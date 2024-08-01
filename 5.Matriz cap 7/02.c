#include <stdio.h>

int main(){
    
    int matriz[2][4], pares=0,qtdPares=0,qtdLin=0;
    for(int i=00;i<2;i++)
        for(int j=0;j<4;j++){
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]%2==0){
                pares+=matriz[i][j];
                qtdPares++;
            }
        }
    printf("\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            if(matriz[i][j]>12 && matriz[i][j]<21)
                qtdLin++;
        }
        printf("%d elementos entre 12 e 20 na linha %d\n",qtdLin,i);
        qtdLin=0;
    }
    printf("Média dos elementos pares: %.1f",(double)pares/qtdPares);

    return 0;
}