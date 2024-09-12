#include <stdio.h>

int main(){
    
    int matriz[3][4],pares=0,impares=0,total=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++){
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]%2==0) pares++;
            else impares+=matriz[i][j];
            total+=matriz[i][j];
        }
    printf("\nA quantidade de elementos pares = %d",pares);
    printf("\nA doma dos elementos impares = %d",impares);
    printf("\nA soma de todoso os elementos = %d",total);
          
        
    
    return 0;
}