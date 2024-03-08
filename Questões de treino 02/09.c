
#include <stdio.h>
#include <math.h>
float credito(float sal,int porcentagem){
    return (sal*porcentagem/100);
}
int main()
{
   float sal;
   scanf("%f",&sal);
   if(sal>400){
       printf("Saldo médio = %.2f\nCrédito = %.2f",sal,credito(sal,30));
   }else if(sal>300 && sal<=400){
        printf("Saldo médio = %.2f\nCrédito = %.2f",sal,credito(sal,25));
   }else if(sal>200 && sal<=300){
        printf("Saldo médio = %.2f\nCrédito = %.2f",sal,credito(sal,20));
   }else if(sal<=200){
        printf("Saldo médio = %.2f\nCrédito = %.2f",sal,credito(sal,10));

   }
    return 0;
}
