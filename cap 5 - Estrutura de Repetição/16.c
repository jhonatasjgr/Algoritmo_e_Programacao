/*
Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. 
Finalize digitando idade igual a zero. 
*/
#include <stdio.h>

int main()
{
  
  int idades=0,qtd=0;
    do{
        int idade;
        scanf("%d",&idade);
        if(idade==0)
            break;
        qtd++;
        idades+=idade;
  } while(idades);
  printf("Media de idades = %d\n",(idades/qtd));
  
    return 0;
}
