
#include <stdio.h>


int main()
{
   int n1,n2;
   scanf("%d %d",&n1,&n2);
   if(n1>n2){
       printf("menor = %d",n2);
   }else if(n1<n2){
      printf("menor = %d",n1);
   }else{
       printf("Numeros iguais");
   }
    return 0;
}
