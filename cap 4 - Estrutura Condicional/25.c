
#include <stdio.h>
float aumento( float extras, float faltas){
    float h = 60*(extras - (2/3 * (faltas)));
    
    if(h<600){
         return 100;
    }else if(h<1200){
         return 200;
    }else if(h<1800){
         return 300;
    }else if(h>1800&&h<2400){
         return 400;
    }else{
        return 500;
    }
}
    
int main()
{
    float extras,faltas;
    scanf("%f %f",&extras,&faltas);
    
    printf("O funcionário recebeu R$%.1f de aumento",aumento(extras,faltas));
    
    
    return 0;
}
