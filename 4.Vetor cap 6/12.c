#include <stdio.h>

int main(){
    
    int v[5],sum=0;
    for(int i=0;i<5;i++){
        printf("\nDigite o %d° número ",i+1);
        scanf("%d",&v[i]);
        sum+=v[i];
    }
    printf("\nOs números digitados foram:");
    for(int i=0;i<5;i++){
        if(i!=4) printf(" %d +",v[i]);
        else printf(" %d = %d", v[i],sum);
    }
    return 0;
}