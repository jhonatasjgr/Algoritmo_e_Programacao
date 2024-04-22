
#include <stdio.h>

int main()
{
    float peso;
    scanf("%f",&peso);
    printf("Novo peso se engordar 15% = %.1f \n",(peso+((peso*15)/100)));
    printf("Novo peso se emagrecer 20% = %.1f \n",(peso-((peso*20)/100)));

    return 0;
}
