#include <stdio.h>
int primo(int v){
    for(int i=0;i<15;i++)
        for(int j=2;j<=v/2;j++)
            if(v%j==0)
                return 0;
    return 1;
}
int main(){
    
    int v[15],vR[15],qtd=0;
    
    for(int i=0;i<15;i++){
        scanf("%d",&v[i]);
        if(v[i]>1 && primo(v[i])==1){
            vR[qtd] = v[i];
            qtd++;
        }
    }
    
    printf("\nprimos\n");
    for(int i=0;i<qtd;i++)
        printf("%d ",vR[i]);
   
    
    return 0;
}