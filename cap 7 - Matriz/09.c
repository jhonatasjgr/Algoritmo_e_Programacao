#include <stdio.h>

int main(){
    
    int matriz[3][3],num;
    
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&matriz[i][j]);
    scanf("%d",&num);
    printf("\nMatriz resultante da multiplicação de cada elemento por %d:\n",num);
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",matriz[i][j]*num);
        printf("\n");
        
    }
        
    return 0;
}