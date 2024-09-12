#include <stdio.h>
void cadastrar(int *idade,char *sexo,double *salario, int *filhos){
    printf("idade | sexo (M|F) | salario | qtd filhos\n");
    for(int i=0;i<15;i++)
    scanf("%d %c %lf %d",&idade[i],&sexo[i],&salario[i],&filhos[i]);
}
double mediaSal(double *salario){
    double sal=0.0;
    for(int i=0;i<15;i++)
        sal+=salario[i];
    return sal;
}
int menorIdade(int *idade){
    int menor = idade[0];
    for(int i=1;i<15;i++)
        if(idade[0]<menor) menor = idade[0];
    return menor;
}
int maiorIdade(int *idade){
    int maior = idade[0];
    for(int i=1;i<15;i++)
        if(idade[0]>maior) maior = idade[0];
    return maior;
}
int qtdMulheres(int *filhos,double *salario){
    int qtd=0;
    for(int i=0;i<15;i++)
        if(filhos[i]==3 && salario[i]<=500.0) qtd++;
    return qtd;
}
int main(){
    
    int idade[15];
    char sexo[15];
    double salario[15];
    int filhos[15];
    
    cadastrar(idade,sexo,salario,filhos);
    printf("\nMédia salarios: %.2lf\n",mediaSal(salario));
    printf("Menor Idade: %d\n",menorIdade(idade));
    printf("Maior idade: %d\n",maiorIdade(idade));
    printf("Quantidade de mulheres com 3 filhos que recebam até R$500,00: %d",qtdMulheres(filhos,salario));
    
    return 0;
}