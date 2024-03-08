
#include <stdio.h>
#include <math.h>
float trinta(float sal,int porcentagem){
    return sal + (sal*porcentagem/100);
}
int main()
{
   float sal;
   scanf("%f",&sal);
   if(sal>0&&sal<300){
       printf("Novo salario após reajuste: %.2f",trinta(sal,35));
   }else if(sal>=300){
       printf("Novo salario após reajuste: %.2f",trinta(sal,15));
   }
    return 0;
}
