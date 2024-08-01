#include <stdio.h>

int main(){
    
    int matriz[3][5], qtd=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<5;j++){
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]>15 && matriz[i][j]<=20)
                qtd++;
        }
    printf("\n%d valores entre 15 e 20\n",qtd);
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++)
           if(matriz[i][j]>15 && matriz[i][j]<=20)
                printf("%d ",matriz[i][j]);
        printf("\n");
    }
    return 0;
}