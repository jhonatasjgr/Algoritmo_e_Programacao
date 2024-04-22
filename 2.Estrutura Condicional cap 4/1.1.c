
#include <stdio.h>
#include <string.h>

int main()
{
   int n[4];
   int m=0;
   for(int i=0;i<4;i++){
        scanf("%d",&n[i]);
        m+=n[i];
   }
  if(m/4>=7){
      printf("Aprovado com média %d",m/4);
  }else{
      printf("Reprovado com média %d",m/4);
  }
    return 0;
}
