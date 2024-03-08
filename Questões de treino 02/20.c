
#include <stdio.h>

int main()
{
   
    int idade;
    scanf("%d",&idade);
    if(idade<5){
        printf("Idade não compativel");
    }else if(idade<=7){
        printf("Infantil");
    }else if(idade<=10){
        printf("Juvenil");
    }else if(idade<=15){
        printf("Adolescente");
    }else if(idade<=30){
        printf("Adulto");
    }else{
        printf("Senior");
    }
    return 0;
}
