/*
Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado. 
Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). 
Sabe-se que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:
■ o número de pessoas que responderam sim;
■ o número de pessoas que responderam não;
■ o número de mulheres que responderam sim; e
■ a percentagem de homens que responderam não, entre todos os homens analisados. 
*/
#include <stdio.h>

int main()
{
    int sim=0,nao=0,mulherSim=0,homensNao=0,qtdHomens=0;;
    for(int i=1;i<=10;i++){
        char sexo,resp;
        scanf("%c %c",&sexo,&resp);
        if(resp=='S'){
            sim++;
            if(sexo=='F')
                mulherSim++;
        }else if(resp=='N'){
            nao++;
            if(sexo=='M')
                homensNao++;
        }
        if(sexo=='M')
            qtdHomens++;
    }
    printf("número de pessoas que responderam sim = %d\n",(sim));
    printf("número de pessoas que responderam não = %d\n",(nao));
    printf("número de mulheres que responderam sim = %d\n",(mulherSim));
    printf("percentagem de homens que responderam não = %d\n",(homensNao/qtdHomens*100));
    
  
  
    return 0;
}
