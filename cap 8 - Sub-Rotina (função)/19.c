#include <stdio.h>
int inter(int *v1, int *v2, int *v3){
    int tam = 0;
    
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++){
            if(v1[i]==v2[j]){  //verifica se há intersecção
                int passou = 1;
                
                for(int k=0;k<tam;k++)  //verifica se já não tem aquele valor no vetor de intersecção
                    if(v2[j]==v3[k]){
                        passou = 0;
                        break;
                    }
                
                if(passou){
                    v3[tam] = v2[j];
                    tam++;
                }
            }
        }
        return tam;    
}
int main(){
    
    int v1[]={1,2,3,4,5,6,7,8,9,16};
    int v2[]={3,5,7,2,16,11,12,13,14,19};
    int v3[10];
   
    int tam  = inter(v1,v2,v3);
    
    for(int i=0;i<tam;i++)
        printf("%d ",v3[i]);
    
    return 0;
}