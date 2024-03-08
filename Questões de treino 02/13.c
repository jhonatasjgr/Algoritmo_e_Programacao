
#include <stdio.h>
#include <math.h>
float novo(float preco){
   if(preco<=50){
       return preco + (preco*5/100);
   }else if(preco<=100){
        return preco + (preco*10/100);
   }else if(preco>100){
        return preco + (preco*15/100);
   }
}

int main()
{
  float preco;
  scanf("%f",&preco);
  preco = novo(preco);
  if(preco<=80){
      printf("Barato");
  }else if(preco<=120){
      printf("Normal");
  }else if(preco<=200){
      printf("Caro");
  }else if(preco>200){
      printf("Muito Caro");
  }
  
    return 0;
}
