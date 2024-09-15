#include <stdio.h>
void cadastrar(float *temp){
    for(int i=0;i<12;i++)
        scanf("%f",&temp[i]);
}
int maior(float *temp){
    int x = 0;
    for(int i=1;i<12;i++)
        if(temp[i]>temp[x]) x = i;
    return x;
}
int menor(float *temp){
    int x = 0;
    for(int i=1;i<12;i++)
        if(temp[i]<temp[x]) x = i;
    return x;
}

int main(){
    char meses[12][10] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", 
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    float temp[12];
    cadastrar(temp);
    printf("Maior temperatura -> mês %d = %s",maior(temp)+1,meses[maior(temp)]);
    printf("\nMenor temperatura -> mês %d = %s",menor(temp)+1,meses[menor(temp)]);

    return 0;
}