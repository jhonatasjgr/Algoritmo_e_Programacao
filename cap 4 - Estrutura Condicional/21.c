
#include <stdio.h>

int main()
{
   
    int cod;
    float preco;
    scanf("%f %d",&preco,&cod);
    if(cod>0&&cod==1){
        printf("Sul");
    }else if(cod==2){
        printf("Norte");
    }else if(cod==3){
        printf("Leste");
    }else if(cod==4){
        printf("Oeste");
    }else if(cod<=6){
        printf("Nordeste");
    }else if(cod<=9){
        printf("Sudeste");
    }else if(cod<=20){
        printf("Centro-oeste");
    }else if(cod<=30){
        printf("Nordeste");
    }else{
        printf("Codigo inválido");
    }
    return 0;
}
