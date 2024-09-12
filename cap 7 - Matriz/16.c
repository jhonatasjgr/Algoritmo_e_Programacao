#include <stdio.h>

int main(){
    
    int matriz[5][5], lin[5],col[5];
        for(int i=0;i<5;i++)
            for(int j=0;j<5;j++){
                scanf("%d",&matriz[i][j]);
                lin[i]+=matriz[i][j];
                col[j]+=matriz[i][j];
            }
        printf("\nMatriz:\n");
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++)
                printf("%d ",matriz[i][j]);
            printf("\n");
        }
        printf("\n");
        for(int i=0;i<5;i++)
            printf("Soma da linha %d = %d\n",i,lin[i]);
        printf("\n");
        for(int i=0;i<5;i++)
            printf("Soma da coluna %d = %d\n",i,col[i]);
    
    return 0;
}