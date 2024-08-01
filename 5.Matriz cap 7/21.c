#include <stdio.h>

int main(){
    
    float matriz[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            scanf("%f",&matriz[i][j]);
            

    printf("\nMatriz resultante: \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            printf("%.1f ",matriz[i][j]*matriz[i][i]);
        printf("\n");
    }
    
    return 0;
}