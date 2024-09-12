#include <stdio.h>

int main(){
   int logica[15],linguagem[15];
   for(int i=0;i<15;i++){
        scanf("%d %d",&logica[i],&linguagem[i]);
        if(logica[i]==linguagem[i]) 
            printf("\nO aluno de matricula %d cursa as duas disciplinas\n",logica[i]);
   }
    return 0;
}