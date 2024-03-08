
#include <stdio.h>
void novo(float preco){
    if(preco<=30){
        printf("%d de desconto\n%.2f Novo preço",0,preco);
    }else if(preco>30 && preco<=100){
        printf("%d de desconto\n%.2f Novo preço",10,(preco + (preco*10/100)));
    }else{
        printf("%d de desconto\n%.2f Novo preço",15,(preco + (preco*15/100)));
    }
}
int main()
{
    float preco;
    int cod;
    scanf("%f %d",&preco,&cod);
    novo(preco);

    return 0;
}
