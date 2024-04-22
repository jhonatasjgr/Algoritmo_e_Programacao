
#include <stdio.h>
#include <math.h>
float novo(float sal,int au){
    return sal + (sal*au/100);
}
int main()
{
  float sal;
  scanf("%f",&sal);
  if(sal<=300){
    printf("Novo salario = R$%.2f",novo(sal,15));
  }else if(sal>300&&sal<600){
    printf("Novo salario = R$%.2f",novo(sal,10));
  }else if(sal>=600&&sal<=900){
    printf("Novo salario = R$%.2f",novo(sal,5));
  }else if(sal>900){
    printf("Novo salario = R$%.2f",novo(sal,0));
  }
  
    return 0;
}
