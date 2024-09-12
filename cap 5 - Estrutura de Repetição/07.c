
#include <stdio.h>

int main()
{
    int i=1, qtdIdosos=0, qtdMagros=0,qtdAlturas=0;
    float alturas=0;
    while(i<=5){
        int idade;
        float peso,altura;
        scanf("%d %f %f",&idade,&altura,&peso);
        if(idade>50){
            qtdIdosos++;
        }
        if(idade>=10&&idade<=20){
            alturas+=altura;
            qtdAlturas++;
        }
        if(peso<40){
            qtdMagros++;
        }
        i++;
    }
    printf("Pessoas com idade maior que 50 = %d\n",qtdIdosos);
    printf("Media das alturas de pessoas com idade entre 10 e 20 anos = %.2f\n",(alturas/qtdAlturas));
    printf("Porcentagem de pessoas com peso menor que 40kg = %d %%",(qtdMagros/5)*100);
    

    return 0;
}
