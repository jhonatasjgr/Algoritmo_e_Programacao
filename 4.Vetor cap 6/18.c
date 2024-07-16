#include <stdio.h>
int main(){
    
    int v[15],maior=v[0],menor=v[0];
    
    for(int i=0;i<15;i++){
        scanf("%d",&v[i]);
        if(v[i]>maior) maior = i;
        else if(v[i]<menor) menor = i;
    }
    
    printf("\nMaior número é %d e está na posição %d",v[maior],maior);
    printf("\nMenor número é %d e está na posição %d",v[menor],menor);
        

    return 0;
}