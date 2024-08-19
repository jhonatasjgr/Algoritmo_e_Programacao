#include <stdio.h>
#include <ctype.h>

void criptografar(int chave, char *palavraSimples, char *palavraCifrada) {
    int i = 0;
    while (palavraSimples[i] != '\0') {
        if (palavraSimples[i] == '\n') { //se tiver quebra de linha substitui por vazio e finaliza
            palavraSimples[i] = '\0';
            break;
        }
        if (isupper(palavraSimples[i]))  // isupper = maiuscula
            palavraCifrada[i] = (((palavraSimples[i] - 'A' + chave) % 26) + 'A');
        else if (islower(palavraSimples[i])) // islower = minuscula
            palavraCifrada[i] = (((palavraSimples[i] - 'a' + chave) % 26) + 'a');
        else //caractere não é letra
            palavraCifrada[i] = palavraSimples[i];
        i++;
    }
    palavraCifrada[i] = '\0'; // Adiciona um vazio no fim da palavra
    printf("\nPalavra Simples: %s", palavraSimples);
    printf("\nPalavra Cifrada: %s", palavraCifrada);
}

int main() {
    int chave;
    char palavraSimples[27];
    char palavraCifrada[27];
    
    while (1) {
        printf("\nDigite a chave de criptografia: ");
        if (scanf("%d", &chave) != 1) {
            printf("Chave inválida. Por favor, insira um número.\n");
            while (getchar() != '\n'); //lê os caracteres digitados até a quebra de linha
            continue;
        }

        // Limpa o buffer de entrada após a leitura da chave
        while (getchar() != '\n');

        printf("Digite a palavra que deseja criptografar: ");
        fgets(palavraSimples, sizeof(palavraSimples), stdin);
        if (palavraSimples[0] == '\n' || palavraSimples[0]=='\0') {
            printf("Erro ao ler a entrada.\n");
            continue;
        }

        criptografar(chave, palavraSimples, palavraCifrada);
    }

    return 0;
}
