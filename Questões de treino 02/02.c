
#include <stdio.h>


int main()
{
   int n1,n2,m;
   scanf("%d %d",&n1,&n2);
   m = (n1+n2)/2;
   if(m>=0 && m<3){
      printf("REPROVADO");
   }else if(m>=3 && m<7){
       printf("EXAME");
   }else if(m>=7 && m<=10){
       printf("APROVADO");
   }
    return 0;
}
