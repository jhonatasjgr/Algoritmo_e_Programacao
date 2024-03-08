
#include <stdio.h>

int main()
{
    float salario, vendas;
    scanf("%f %f",&salario,&vendas);
    salario += ((vendas*4)/100);
    printf("Salario + comissão = R$%.2f",salario);

    return 0;
}
