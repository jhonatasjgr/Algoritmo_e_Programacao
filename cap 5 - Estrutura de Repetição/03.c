
#include <stdio.h>
float porcentagem(int qtd_faixa){
    return ((qtd_faixa/8)*100);
}

int main()
{
   int faixa[]={0,0,0,0,0};
   int i=1;
   while(i<=8){
       int idade;
       scanf("%d",&idade);
       if(idade>=0&&idade<=15){
           faixa[0]++;
       }else if(idade<=30){
            faixa[1]++;
       }else if(idade<=45){
            faixa[2]++;
       }else if(idade<=60){
            faixa[3]++;
       }else{
            faixa[4]++;
       }
       i++;
   }
   i=0;
   while(i<5){
       printf("%d pessoas na faixa %d°\n",faixa[i],i+1);
       i++;
   }
    printf("%d%% na primeira faixa-etaria\n",faixa[0]/8*100);
    printf("%d%% na ultima faixa-etaria\n",faixa[4]/8*100);
    
    return 0;
}
