#include <stdio.h>
#include <math.h>

int main(void)

{
    int a, b, c;
    
    while (1)
    {
        scanf("%d %d %d",&a, &b, &c);
        if(a==0) break;
        
        int area=((a*b)*100)/c;//(areaCasa*maximopermitido)/percentual(parte) que deseja construir
        area=sqrt(area);//raiz quadrada da area para verificar o tamanho do lado (l^2)

        printf("%d\n", area);
    }

    return 0;
}