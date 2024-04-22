
#include <stdio.h>

int main()
{
   
    int idade;
    float peso;
    scanf("%d %f",&idade,&peso);
    if(idade<=20&&peso<=60){
        printf("9");
    }else if(idade<=20&&peso<=90){
        printf("8");
    }else if(idade<=20&&peso>90){
        printf("7");
    }else if(idade<=50&&peso<=60){
        printf("6");
    }else if(idade<=50&&peso<=90){
        printf("5");
    }else if(idade<=50&&peso>90){
        printf("4");
    }else if(idade>50&&peso<=60){
        printf("3");
    }else if(idade>50&&peso<=90){
        printf("2");
    }else if(idade>50&&peso>90){
        printf("1");
    }else{
        printf("Inválido");
    }
    
    return 0;
}
