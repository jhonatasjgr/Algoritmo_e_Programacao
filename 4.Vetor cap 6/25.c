#include <stdio.h>
int primo(int v){
    for(int i=0;i<15;i++)
        for(int j=2;j<=v/2;j++)
            if(v%j==0)
                return 0;
    return 1;
}
int main(){
    
    int v[15],maior=v[0];
    
    for(int i=0;i<15;i++){
        scanf("%d",&v[i]);
        if(v[i]>maior) maior = v[i];
    }
    
    printf("\nvetor\n");
    for(int i=0;i<15;i++)
        printf("%.1f ",(float)v[i]/maior);
   
    
    return 0;
}