#include <stdio.h>

int main(){
    
   char nomes[15][6];
   float notas[2][6],media=0;
   int a,r,e;
  printf("Digite o nome, nota 1 e nota2: ");
  for(int i=0;i<6;i++){
      scanf("%s %f %f",nomes[i],&notas[0][i],&notas[1][i]);
      media+=(notas[0][i]+notas[1][i])/2;
      if(notas[0][i]+notas[1][i]>=7) a++;
      else if(notas[0][i]+notas[1][i]<3) r++;
      else e++;
  }
  printf("\nMédia da classe: %.1f",media/6);
  printf("\nPercentual de alunos aprovados: %d%%",a*100/6);
  printf("\nPercentual de alunos reprovados: %d%%",r*100/6);
  printf("\nPercentual de alunos de exame: %d%%",e*100/6);
   
        
    return 0;
}