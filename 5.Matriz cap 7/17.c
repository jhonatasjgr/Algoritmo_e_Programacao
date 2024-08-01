#include <stdio.h>

int main(){
    
    int matriz[10][10],sumDiag=0;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++){
            scanf("%d",&matriz[i][j]);
            if(i==j) sumDiag+=matriz[i][j];
        }
    printf("\nMédia da diagonal principal = %d\n",sumDiag/10);
            
    
    return 0;
}