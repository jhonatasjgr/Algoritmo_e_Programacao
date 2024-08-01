#include <stdio.h>

int main(){
    
    int matriz[6][3],maior,menor;
    int linMaior, colMaior, linMenor, colMenor;
    
    for(int i=0;i<6;i++)
        for(int j=0;j<3;j++){
            scanf("%d",&matriz[i][j]);
            if(i==0 && j==i){
                maior = matriz[0][0];
                menor = matriz[0][0];
            }
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
                linMaior=i+1;
                colMaior=j+1;
            }
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
                linMenor=i+1;
                colMenor=j+1;
            }
        }
    printf("\nMaior elemento=%d na linha %d e coluna %d\n",maior,linMaior,colMaior);
    printf("\nMenor elemento=%d na linha %d e coluna %d\n",menor,linMenor,colMenor);

    return 0;
}