#include <stdio.h>

int main(){
    
    int v[10];
    int par=0, impar=0;
    for(int i=0;i<10;i++){
        scanf("%d",&v[i]);
        if(v[i]%2==0) par++;
        else impar++;
    }
    int pares[par], impares[impar];
    par=0;
    impar=0;
    for(int i=0;i<10;i++)
        if(v[i]%2==0){
            pares[par] = v[i];
            par++;
        }else{
            impares[impar] = v[i];
            impar++;
        }
    printf("\nPares: ");
    for(int i=0;i<(sizeof(pares)/sizeof(pares[0]));i++)
        printf("%d ",pares[i]);
    printf("\nImpares: ");
    for(int i=0;i<(sizeof(pares)/sizeof(pares[0]));i++)
        printf("%d ",impares[i]);
    return 0;
}