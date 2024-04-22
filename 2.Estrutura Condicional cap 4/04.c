
#include <stdio.h>


int main()
{
   int n1,n2,n3;
   scanf("%d %d %d",&n1,&n2,&n3);
   if(n1==n2 && n2==n3){
       printf("Numeros iguais");
   }else if(n1>n2 &&n1>n3){
       printf("maior = %d",n1);
   }else if(n2>n1 &&n2>n3){
       printf("maior = %d",n2);
   }else{
       printf("maior = %d",n3);
   }
    return 0;
}
