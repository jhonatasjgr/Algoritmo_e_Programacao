
#include <stdio.h>
#include <math.h>

int main()
{
   int n1,n2,op;
   scanf("%d %d",&n1,&n2);
   printf("1 - O primeiro número elevado ao segundo número.\n2 - Raiz quadrada de cada um dos números.\n3 - Raiz cúbica de cada um dos números.\nESCOLHA A OPÇÃO: ");
    scanf("%d",&op);
    if(op==1){
        printf("%d elevado a %d = %.1f",n1,n2,(pow(n1,n2)));
    }else if(op==2){
        printf("Raiz de %d = %.1f\nRaiz de %d = %.1f",n1,sqrt(n1),n2,sqrt(n2));
    }else if(op==3){
        printf("Raiz cubica de %d = %.1f\nRaiz cubica de %d = %.1f",n1, cbrt(n1),n2,cbrt(n2));
    }else{
        printf("OPÇÃO INVÁLIDA");
    }
    return 0;
}
