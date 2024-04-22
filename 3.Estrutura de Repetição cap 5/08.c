
#include <stdio.h>

int main()
{
   int i=1,op1=0,qtdOp2=0,qtdOp3=0,qtdOp4=0;
   float idadesOp2=0;
   
    while(i<=6){
        float idade,peso,altura;
        char olhos,cabelos;
        printf("Digite a idade,peso,altura,\ncor dos olhos(A-azul;P-preto;V-verde;C-castanho)\ne cor dos cabelos(P-preto;C-castanhoL-louro;R-ruivo)\n");
        scanf("%f %f %f %c %c",&idade,&peso,&altura,&olhos,&cabelos);
        if(idade>50&&peso<60){
            op1++;
        }
        if(altura<1.5){
            qtdOp2++;
            idadesOp2+=idade;
        }
        if(olhos=='A'){
            qtdOp3++;
        }
        if(cabelos=='R'&&olhos!='A'){
            qtdOp4++;
        }
        i++;
    }
    printf("Quantidade de pessoas com idade maior que 50 e peso menor que 60 = %d\n",op1);
    printf("Media de idades de pessoas com altura menor que 1.50m = %.2f\n",(idadesOp2/qtdOp2));
    printf("Porcentagem de pessoas com olhos azuis = %d\n",(qtdOp3/6)*100);
    printf("Quantidade de pessoas ruivas com olhos não azuis = %d\n",qtdOp4);
    return 0;
}
