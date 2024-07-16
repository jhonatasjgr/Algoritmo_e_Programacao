#include <stdio.h>
void ordenar(int *v3){
    for(int i=0;i<20;i++)
        for(int j=i;j<20;j++)
            if(v3[i]>v3[j]){
                int x = v3[i];
                v3[i] = v3[j];
                v3[j] = x;
            }
    printf("\nVetor ordenado\n");
}
int main(){
    
    int v1[10],v2[10],v3[20];
    
    for(int i=0;i<10;i++)
        scanf("%d %d",&v1[i],&v2[i]);
    for(int i=0;i<20;i++)
        if(i<10) v3[i] = v1[i];
        else v3[i] = v2[i-10];
    ordenar(v3);
    for(int i=0;i<20;i++)
        printf("%d ",v3[i]);

    return 0;
}