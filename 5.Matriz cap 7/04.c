#include <stdio.h>

int main(){
    float notas[15][5];//5 notas de cada aluno
    char nomes[15][15];//nome de 15 alunos com 15 caracteres
    float mediaClasse=0, mediaIndividual=0;
    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            scanf("%f",&notas[i][j]);
            mediaClasse+=notas[i][j];
        }
        scanf("%s",nomes[i]);
    }
    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            mediaIndividual+=notas[i][j];
        }
        mediaIndividual/=5;
        if(mediaIndividual<3) 
            printf("\n%s Reprovado com média %.1f\n",nomes[i],mediaIndividual);
        else if(mediaIndividual<7) 
            printf("\n%s de Exame com média %.1f\n",nomes[i],mediaIndividual);
        else 
            printf("\n%s Aprovado com média %.1f\n",nomes[i],mediaIndividual);
        mediaIndividual=0;
    }
    
    
    return 0;
}