#include <stdio.h>
#include <stdlib.h>
//converte a String para valores inteiros
int charToInt(char c){
     int ascii[]={48,49,50,51,52,53,54,55,56,57};//do 0 ao 9 de acordo com a tabela ascii
     for(int i=0;i<10;i++)
        if((int) c == ascii[i])
            return i;
}
//realiza a soma dos digitos intercalados
int soma(int d){
        if(d<10) return d;
        int soma=0, vet[2];
        for(int j=0;j<2;j++){
            soma+=d%10;
            d/= 10;
        }
     return soma;
}
//verifica se o ultimo digito é 0 ou não para verificar validade
int valido(int sum){
    int d=sum%10;
    return d;
}
int main(){
   //o código trabalha apenas com cartão mastercard que é o cartão com 16 digitos
    char cartao[16];//digitos em Char
    int digitos[16];//digitos em int (irá ser inicializado depois)
    int sum=0,sum2=0;//sum 1 = soma dos validadores && sum 2 = soma de sum 1 com os demais
    printf("Digite os digitos do cartao: ");
    scanf("%s",cartao);
    for(int i=0;i<16;i++)
        if(i%2==0){
            digitos[i] = charToInt(cartao[i])*2;
            sum+=soma(digitos[i]);
        }else{
            digitos[i] = charToInt(cartao[i]);
             sum2+=soma(digitos[i]);
        }
   
    sum2+=sum;
    printf("\n%d\n",valido(sum2));
    (valido(sum2)==0)? printf("Cartão valido"):printf("Cartão Inválido");
 

    return 0;
}