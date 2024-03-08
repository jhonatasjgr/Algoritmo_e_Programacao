
#include <stdio.h>


int main()
{
   int n1,n2,op;
   scanf("%d %d",&n1, &n2);
   printf("\n1 Média entre os números digitados\n2 Diferença do maior pelo menor\n3 Produto entre os números digitados\n4 Divisão do primeiro pelo segundo\nDIGITE A OPERAÇÃO: ");
   scanf("%d",&op);
    if(op==1){
        printf("Media = %d",((n1+n2)/2));
    }else if(op==2){
        if(n1>n2){
            printf("Diferença = %d",(n1-n2));
        }else{
            printf("Diferença = %d",(n2-n1));
        }
    }else if(op==3){
        printf("Produto = %d",(n1*n2));
    }else if(op==4 && n2!=0){
        printf("Divisão = %.d", (n1/n2));
    }else{
        printf("Operação inválida");
    }
    return 0;
}
