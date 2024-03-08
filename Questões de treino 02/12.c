
#include <stdio.h>
#include <math.h>
float novo(float sal,int au){
    return sal - (sal*7/100) + au;
}
int main()
{
  float sal;
  scanf("%f",&sal);
  if(sal<=350){
    printf("Novo salario = R$%.2f",novo(sal,100));
  }else if(sal>350&&sal<600){
    printf("Novo salario = R$%.2f",novo(sal,75));
  }else if(sal>=600&&sal<=900){
    printf("Novo salario = R$%.2f",novo(sal,50));
  }else if(sal>900){
    printf("Novo salario = R$%.2f",novo(sal,35));
  }
  
    return 0;
}
