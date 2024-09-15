/*
 média de salário da população
 média do número de filhos
 maior salário
 percentual de pessoas com salário inferior a R$ 380,00
*/

#include <stdio.h>
void coletar(float *salario,float *maiorSalario,int *filhos,int *qtdFilhos,int *qtdPessoas){
    float sal;
    int fi;
    while(scanf("%f %d",&sal,&fi)){
        if(fi==0) break;
        *salario+=sal;
        filhos+=fi;
        if(sal>*maiorSalario) *maiorSalario = sal;
        qtdFilhos++;
        if(sal<380) qtdPessoas++;
    }
    
}
int main(){
    float salario=0, maiorSalario=0;
    int filhos;
    int qtdFilhos;
    int qtdPessoas;
    
    coletar(&salario,&maiorSalario,&filhos,&qtdFilhos,&qtdPessoas);
    
    printf("\nMédia de salario = R$ %.2lf",(double)salario/qtdFilhos);
    printf("\nMédia de filhos = %.1lf",(double)filhos/qtdFilhos);
    printf("\nMaior Salario = R$ %.2f",maiorSalario);
    printf("\nPercentual de pessoas com salário inferior a R$ 380,00 = %.1f%%",(float)(qtdPessoas*qtdFilhos)/100);

    return 0;
}