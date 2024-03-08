
#include <stdio.h>

int main()
{
    const int senha = 4531;
    int input;
    scanf("%d",&input);
    if(input==senha){
        printf("Permitido");
    }else{
        printf("Senha errada");
    }

    return 0;
}
