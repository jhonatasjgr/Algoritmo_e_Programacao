
#include <stdio.h>

int main()
{
    int horasTrabalhadas, horasExtras;
    float salarioMin,salario;
    scanf("%d %f %d",&horasTrabalhadas,&salarioMin,&horasExtras);
    salario = horasTrabalhadas*(salarioMin/8) + (horasExtras*(salarioMin/4));
    printf("Salário: %.2f",salario);

    return 0;
}
