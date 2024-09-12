#include <stdio.h>

int main(){
    int v[15];
    for(int i=0;i<15;i++){
        scanf("%d",&v[i]);
        if(v[i]==30) 
            printf("\n%d é 30 e está na posição %d\n",v[i],i);
    }

    return 0;
}