/*
Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. 
Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
■■ a média das idades das pessoas que responderam ótimo;
■■ a quantidade de pessoas que responderam regular; e
■■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados. 
*/
#include <stdio.h>

int main()
{
   int regular=0,mediaIdades=0,bom=0;
   for(int i=1;i<=15;i++){
       printf("ótimo — 3; bom — 2; regular — 1.\n");
       int idade,op;
       scanf("%d %d",&idade,&op);
       if(op==1){
           regular++;
       }else if(op==2){
           bom++;
       }else if(op==3){
           mediaIdades+= (mediaIdades+idade)/2;
       }
   }
   printf("média das idades das pessoas que responderam ótimo = %d\n",mediaIdades);
   printf("quantidade de pessoas que responderam regular = %d\n",regular);
   printf("percentagem de pessoas que responderam bom = %d\n",(bom/15)*100);
    return 0;
}
