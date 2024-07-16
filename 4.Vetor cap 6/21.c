#include <stdio.h>
int main(){
    
    int v[10],vR[10];
    for(int i=0;i<10;i++){
        scanf("%d",&v[i]);
        if(v[i]==0) vR[i]=1;
        else vR[i]=v[i];
    }
    printf("\nVetores\n");
    for(int i=0;i<10;i++)
        printf("%d ",v[i]);
    printf("\n");
    for(int i=0;i<10;i++)
        printf("%d ",vR[i]);
    return 0;
}