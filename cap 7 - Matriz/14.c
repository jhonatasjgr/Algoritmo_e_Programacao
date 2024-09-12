#include <stdio.h>

int main(){
    
    int matriz[2][3], qtd=0;;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&matriz[i][j]);
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            if(matriz[i][j]>4&&matriz[i][j]<16){
                qtd++;
                printf("%d ",matriz[i][j]);
            }
        
    }
    printf("  são os %d elementos entre [5,15]",qtd);
    return 0;
}