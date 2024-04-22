
#include <stdio.h>

int main()
{
    int i=1, idades,qtdPessoas,op1,op2;
    while(i<=10){
        int idade;
        float peso, altura;
        scanf("%d %f %f",&idade,&peso,&altura);
        idade+=idade;
        if(peso>90&&altura<1.5){
            qtdPessoas++;
        }
        
        if(altura>1.9){
          if(idade>=10&&idade<=30){
            op1++;
        } 
        op2++;
        }
    }
    printf("Media das idades = %.1f\n",(float)(idades/10));
    printf("Quantidade de pessoas com peso maior que 90 e altura menor que 1.5 = %d\n",qtdPessoas);
    printf("Porcentagem de pessoas com idade entre 10 e 30 entre as maiores de 1.90 = %d\n",(op1/op2)*100);

    return 0;
}
