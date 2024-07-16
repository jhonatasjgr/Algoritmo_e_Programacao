#include <stdio.h>

int main(){
    
    float notas[8],media=0;
    char nomes[15][8];
    
    for(int i=0;i<8;i++){
        printf("Digite o nome do %d° aluno: ",i+1);
        scanf("%s",nomes[i]);
        printf("Digite a nota do %s: ",nomes[i]);
        scanf("%f",&notas[i]);
        media+=notas[i];
    }
    for(int i=0;i<8;i++)
        printf("%s %.1f\n",nomes[i],notas[i]);
    printf("Média da classe: %.1f",(media/8));
    
        
    return 0;
}