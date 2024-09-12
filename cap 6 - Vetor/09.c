#include <stdio.h>

int main(){
    
    char nomes[15][10];
    int codigos[10];
    float precos[10];
    for(int i=0;i<10;i++){
        scanf("%s %d %f",nomes[i],&codigos[i],&precos[i]);
        if(codigos[i]%2==0 && precos[i]>1000)
            precos[i] += precos[i]*20/100;
        else if(codigos[i]%2==0)
                    precos[i] += precos[i]*15/100;
        else if(precos[i]>1000)
                    precos[i] += precos[i]*10/100;
                    
        printf("\nNovo preço = R$%.2f\n",precos[i]);
    }
    return 0;
}