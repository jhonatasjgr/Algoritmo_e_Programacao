/*
Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:
1, 2, 3, 4 Votos para os respectivos candidatos
5 Voto nulo
6 Voto em branco
Faça um programa que calcule e mostre:
■■ o total de votos para cada candidato;
■■ o total de votos nulos;
■■ o total de votos em branco;
■■ a porcentagem de votos nulos sobre o total de votos; e
■■ a porcentagem de votos em branco sobre o total de votos. 
*/
#include <stdio.h>
void votosCada(int votos[6]){
    for(int i=0;i<4;i++){
        printf("Candidado %d teve %d votos\n",i+1,votos[i]);
    }
}
int qtd(int votos[6]){
    int qtd=0;
    for(int i=0;i<6;i++){
        qtd+=votos[i];
    }
    return qtd;
}
int main(){
  int votos[]={0,0,0,0,0,0};
  do{
      int voto;
      scanf("%d",&voto);
        if(voto==0)
          break;
    if(voto==1){
        votos[0]++;
    }else if(voto==2){
        votos[1]++;
    }else if(voto==3){
        votos[2]++;
    }else if(voto==4){
        votos[3]++;
    }else if(voto==5){
        votos[4]++;
    }else if(voto==6){
        votos[5]++;
    }else{
        printf("Voto inválido!\n");
    }
  }while(votos);
   votosCada(votos);
   printf("%d votos nulos\n",votos[4]);
   printf("%d votos brancos\n",votos[5]);
   printf("porcentagem de votos nulos = %d\n",(votos[4]/qtd(votos))*100);
   printf("porcentagem de votos brancos = %d\n",(votos[5]/qtd(votos))*100);
   printf("\n");
   
   

    return 0;
}
