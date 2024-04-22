/*
Foi feita uma pesquisa entre os habitantes de uma região. 
Foram coletados os dados de idade, sexo (M/F)e salário. 
Faça um programa que calcule e mostre:
■ a média dos salários do grupo;
■ a maior e a menor idade do grupo;
■ a quantidade de mulheres com salário até R$ 200,00;
■ a idade e o sexo da pessoa que possui o menor salário.
Finalize a entrada de dados ao ser digitada uma idade negativa. 

*/
#include <stdio.h>
struct menorSalario{
    int idade;
    char sexo;
    float salario;
};

int main()
{
    struct menorSalario menorSalario;
    menorSalario.idade=0;
    
    float salarios=0,salario;
    char sexo;
    int idade=0,maiorIdade=0,menorIdade=0,qtdMulherSal200=0,qtdSalarios=0;
    do{
        scanf("%d %c %f",&idade,&sexo,&salario);
            if(idade<0)
                break;
        salarios+=salario;
        qtdSalarios++;
            if(idade>maiorIdade)
                maiorIdade = idade;
            if(idade<menorIdade)
                menorIdade = idade;
            if(sexo=='F'&&salario<=200)
                qtdMulherSal200++;
            if(menorSalario.salario>salario){
                menorSalario.salario=salario;
                menorSalario.sexo=sexo;
                menorSalario.idade=idade;
            }
    }while(idade);
    printf("média dos salários = %.1f\n",(salario/qtdSalarios));
    printf("maior idade = %d\nmenor idade = %d\n",maiorIdade,menorIdade);
    printf("quantidade de mulheres com salário até R$ 200,00 = %d\n",qtdMulherSal200);
    printf("idade = %d e o sexo = %c da pessoa que possui o menor salário\n",menorSalario.idade,menorSalario.sexo);
    
    
    return 0;
}
