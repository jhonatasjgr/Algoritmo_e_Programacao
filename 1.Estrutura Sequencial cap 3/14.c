
#include <stdio.h>

int main()
{
   int anoAtual, anoNas;
    scanf("%d %d",&anoNas,&anoAtual);
    printf("%d anos\n",(anoAtual-anoNas));
    printf("%d meses\n",(anoAtual-anoNas)*12);
    printf("%d dias\n",(anoAtual-anoNas)*365);
    printf("%d semanas\n",(anoAtual-anoNas)*365/4);

    return 0;
}
