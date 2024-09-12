#include <stdio.h>

double pesoIdeal(float a, char s){
    if(s=='M') return (72.7 * a - 58);
    else return (62.1 *a) - 44.7;
}

int main(){
   
    float altura;
    char sexo;
    printf("Digite a altura e o sexo (M | F): ");
    scanf("%f %c",&altura,&sexo);
    printf("Peso ideal: %.2lf",pesoIdeal(altura,sexo));
    return 0;
}