
#include <stdio.h>
#include <math.h>
float novo(float sal,int tipo){
  if(tipo==1){
      return sal +(sal*3/100);
  }else if(tipo==2){
      return sal +(sal*4/100);
  }
}

int main()
{
    float sal;
    int tipo;
    printf("Digite o investimento seguido to tipo de aplicação\n1-Poupança\n2-Fundos de renda fixa\n");
    scanf("%f %d",&sal, &tipo);
    printf("Novo Valor R$%.2f",novo(sal,tipo));
  
    return 0;
}
