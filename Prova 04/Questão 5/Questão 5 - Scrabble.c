#include <stdio.h>
int pontos(char palavra[10],int *ascii_codes, int *valor){
    int pontos=0;
    for(int i=0;(palavra[i]!='\0' || i<10);i++){//percorre as letras da palavra até que seja vazio
        for(int j=0;j<26;j++){//percorre o codigo das letras: tabela ascii_codes
           if((int)palavra[i]==ascii_codes[j]){
               pontos+=valor[j];
               break;
           } 
        }
    }
    return pontos;
}
int main(){
    int ascii_codes[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
    int valor[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char jogador1[25];
    int pontosJogador1;
    char jogador2[25];
    int pontosJogador2;
    printf("Digite a palavra do jogador1 todas as lestras maiusculas:");
    scanf("%s",jogador1);
    printf("Digite a palavra do jogador2  todas as lestras maiusculas:");
    scanf("%s",jogador2);
    pontosJogador1 = pontos(jogador1,ascii_codes,valor);
    pontosJogador2 = pontos(jogador2,ascii_codes,valor);
    if(pontosJogador1>pontosJogador2) printf("Jogador 1 ganhou!");
    else if(pontosJogador2>pontosJogador1) printf("Jogador 2 ganhou!");
    else    printf("Empate!");
    return 0;
}