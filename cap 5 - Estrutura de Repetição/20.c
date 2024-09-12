/*
Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem
*/
#include <stdio.h>

int main(){
   int op;
   do{
       float n1,n2;
       scanf("%d",&op);
       if(op==1){
           scanf("%f %f",&n1,&n2);
           printf("Media = %.1f",(n1+n2)/2);
       }else if(op==2){
           int p1,p2;
            scanf("%f %d %f %d",&n1,&p1,&n2,&p2);
            printf("Media = %.1f",((n1*p1)+(n2*p2))/(p1+p2));
       }
   }while(op!=3);
   

    return 0;
}
