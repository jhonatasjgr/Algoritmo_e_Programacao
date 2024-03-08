
#include <stdio.h>
#include <math.h>
float trinta(float sal){
    return sal + (sal*30/100);
}
int main()
{
   float sal;
   scanf("%f",&sal);
   if(sal<500){
       printf("Novo salario após reajuste: %.2f",trinta(sal));
   }else{
       printf("Funcionário não tem direito a aumento");
   }
    return 0;
}
