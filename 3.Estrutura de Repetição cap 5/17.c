/*
Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. 
Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal.
Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa não entrava na pesquisa.
Faça um programa que:
■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo); e
■ calcule e mostre a porcentagem de audiência de cada canal.
Para encerrar a entrada de dados, digite o número do canal ZERO. 
*/
#include <stdio.h>
int total(int q[4]){
    int t=0;
    for(int i=0;i<4;i++){
        t+=q[i];
    }
    return t;
}
int main()
{
  int qtd[]={0,0,0,0}; 
 do{
     int canal,pessoas;
     scanf("%d %d",&canal,&pessoas);
        if(canal==0)
            break;
    if(canal==4){
        qtd[0]+=pessoas;
    }else if(canal==5){
         qtd[1]+=pessoas;
    }else if(canal==7){
         qtd[2]+=pessoas;
    }else if(canal==12){
         qtd[3]+=pessoas;
    }
 }while(qtd);
    printf("Canal 4 = %d%% \n",(qtd[0]*total(qtd))/100);
    printf("Canal 5 = %d%% \n",(qtd[1]*total(qtd))/100);
    printf("Canal 7 = %d%% \n",(qtd[2]*total(qtd))/100);
    printf("Canal 12 = %d%% \n",(qtd[3]*total(qtd))/100);
  
    return 0;
}
