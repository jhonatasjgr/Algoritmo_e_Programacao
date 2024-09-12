#include <stdio.h>
int main(){
    
    int v1[10],v2[10],v3[10];
    for(int i=0;i<10;i++){
        scanf("%d %d",&v1[i],&v2[i]);
        v3[i] = v1[i]*v2[i];
    }
    printf("\nVetor resultante\n");
    for(int i=0;i<10;i++)
        printf("%d ",v3[i]);
    return 0;
}