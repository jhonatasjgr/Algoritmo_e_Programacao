#include <stdio.h>

int main(){
    
    int pri[10],seg[5];
    int priRes[10],segRes[10],tamPri=0,tamSeg=0;
    for(int i=0;i<10;i++)
        if(i<5) scanf("%d %d",&pri[i],&seg[i]);
        else scanf("%d",&pri[i]);
    for(int i=0;i<10;i++)
        if(pri[i]%2==0){
            priRes[tamPri]=pri[i];
            for(int i=0;i<5;i++)
                priRes[tamPri]+=seg[i];
        tamPri++;
        }
    for(int i=0;i<10;i++)
        if(pri[i]%2!=0)
            for(int j=0;j<5;j++)
                if(pri[i]%seg[j]==0){
                    segRes[tamSeg]=tamSeg;
                tamSeg++;
                }
    printf("\nPrimeiro vetor resultante: ");
    for(int i=0;i<tamPri;i++)
        printf("%d ",priRes[i]);
    printf("\nSegundo vetor resultante: ");
    for(int i=0;i<tamSeg;i++)
        printf("%d ",segRes[i]);
    return 0;
}