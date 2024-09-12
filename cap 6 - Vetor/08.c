#include <stdio.h>

int main(){
    
    char nomes[15][7];
    float medias[7];
    float maior = 0;
    int posMaior;
    for(int i=0;i<7;i++){
        scanf("%s %f",nomes[i],&medias[i]);
        if(medias[i]>maior){
            maior = medias[i];
            posMaior=i;
        }
        if(medias[i]<7)
            printf("%s precisa de 5 no exame final para ser aprovado",nomes[i]);
    }
    
    
    return 0;
}