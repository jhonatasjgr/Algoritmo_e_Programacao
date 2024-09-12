
#include <stdio.h>
#include <math.h>
float preco(float custo,int dis,int imp){
    return custo + (custo*dis/100) + (custo*imp/100);
}
int main()
{
  float custo;
  scanf("%f",&custo);
  if(custo>0 &&custo<=12000){
      printf("Preço = R$%.2f",preco(custo,5,0));
  }else if(custo<25000){
       printf("Preço = R$%.2f",preco(custo,10,15));
  }else if(custo>25000){
       printf("Preço = R$%.2f",preco(custo,15,20));
  }
  
    return 0;
}
