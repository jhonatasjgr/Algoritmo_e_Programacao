
#include <stdio.h>
#include <math.h>
float novo(float sal){
   if(sal<=300){
       return sal + (sal*50/100);
   }else if(sal<=500){
        return sal + (sal*40/100);
   }else if(sal<=700){
        return sal + (sal*30/100);
   }else if(sal<=800){
        return sal + (sal*20/100);
   }else if(sal<=1000){
        return sal + (sal*10/100);
   }else{
        return sal + (sal*5/100);
   }
}

int main()
{
    float sal;
    scanf("%f",&sal);
    printf("Novo Salario R$%.2f",novo(sal));
  
    return 0;
}
