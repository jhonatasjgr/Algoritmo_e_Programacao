
#include <stdio.h>

int main()
{
   int hr,min;
   scanf("%d %d",&hr,&min);
   printf("%dh em minutos = %dmin\n",hr,(hr*60));
   printf("Minutos totais = %dmin\n",(hr*60)+min);
   printf("Segundos totais = %ds",((hr*60)+min)*60);

    return 0;
}
