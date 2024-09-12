
#include <stdio.h>

int main()
{
   int n1,n2,n3,n4;
   scanf("%d %d %d %d",&n4,&n3,&n2,&n1);
   
   if(((n1+n2+n3+n4)/4)>=7){
       printf("Aprovado com média %d",((n1+n2+n3+n4)/4));
   }else{
       printf("reprovado com média %d",((n1+n2+n3+n4)/4));
   }

    return 0;
}
