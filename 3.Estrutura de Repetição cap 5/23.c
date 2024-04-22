/*

1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
Digite a opção desejada.
1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
salários percenTagem de aumenTo
##### Até R$ 210,00 15% ### De R$ 210,00 a R$ 600,00 (inclusive) 10% ### Acima de R$ 600,00 5%
2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
férias equivalem a seu salário acrescido de um terço do salário.
3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
multiplicado pelo número de mese
*/
#include <stdio.h>
void novoSalario(){
    float sal;
    scanf("%f",&sal);
    if(sal>=0&&sal<=210){
        printf("Novo Salario = R$%.2f\n",sal+(sal*15/100));
    }else if(sal<=600){
         printf("Novo Salario = R$%.2f\n",sal+(sal*10/100));
    }else{
         printf("Novo Salario = R$%.2f\n",sal+(sal*5/100));
    }
}
void ferias(){
    float sal;
    scanf("%f",&sal);
    printf("Valor das férias = R$%.2f",sal+(sal/3));
}
void decimoTerceiro(){
    float sal;
    int meses;
    scanf("%f %d",&sal,&meses);
    if(meses>12){
        printf("Quantidade de meses infálida!");
    }else{
        printf("Decimo Terceiro = R$%.2f",(sal*meses/12));
    }
}
void menu(){
    int op;
    do{
        printf("Menu de opções:\n1. Novo salário\n2. Férias\n3. Décimo terceiro\n4. Sair\nDigite a opção desejada:");
        scanf("%d",&op);
        if(op==1){
            novoSalario();
        }else if(op==2){
            ferias();
        }else if(op==3){
            decimoTerceiro();
        }
        
    }while(op!=4);
}

int main(){
    
    menu();
    return 0;
}
