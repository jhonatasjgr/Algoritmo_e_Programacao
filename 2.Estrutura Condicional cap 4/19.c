
#include <stdio.h>

int main()
{
   
    float altura;
    int sexo; //1 para homem e 2 para mulher
    scanf("%f %d",&altura,&sexo);
    if(sexo==1){
        printf("Altura ideal: %.2f",(72.7*altura)-58);
    }else if(sexo==2){
        printf("Altura ideal: %.2f",(62.1*altura)-44.7);
    }

    return 0;
}
