#include <stdio.h>
//funcao para multiplicar as matrizes e colocar os dados em uma matriz resultante
void multiplica_matrizes(int n, int matriz1[n][n], int matriz2[n][n], int resultado[n][n]){
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                 resultado[i][j] = 0;
                for (int k = 0; k < n; k++) 
                    resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        printf("Matriz Resultante:\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                printf("%d ",resultado[i][j]);
            printf("\n");
        }
}
int main(){
    int n;
    scanf("%d",&n);
    int matriz1[n][n],matriz2[n][n],resultado[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&matriz1[i][j]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&matriz2[i][j]);
    multiplica_matrizes(n,matriz1,matriz2,resultado);
    return 0;
}