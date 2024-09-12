
#include <stdio.h>

int main()
{
    float B,b,h;
    printf("Base Maior:");
    scanf("%f",&B);
    printf("Base Menor:");
    scanf("%f",&b);
    printf("Altura:");
    scanf("%f",&h);
    printf("Área do trapézio: %.1f\n",((B+b)*h)/2);
    

    return 0;
}
