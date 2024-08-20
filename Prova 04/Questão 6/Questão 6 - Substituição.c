#include <stdio.h>
#include <ctype.h>
int tam(char *palavra){ //funcao para calcular o tamanho da string
    int tamanho=0;
    for(int i=0;palavra[i]!='\0';i++)
        tamanho++;
    return tamanho;
}
void criptografar(char *palavra,char *chave){ //FUNCAO PARA CRIPTOGRAFAR A PALAVRA
    char palavraCriptografada[27];
    int i;
    for( i=0;palavra[i]!='\0';i++){
        if(isupper(palavra[i])){//maiuscula?
            palavraCriptografada[i] = toupper(chave[palavra[i]-'A']);//pega a letra e retorna como maiuscula na posição da letra - ((int) A)
        }else if(islower(palavra[i])){//minuscula?
            palavraCriptografada[i] = tolower(chave[palavra[i]-'a']);
        }else{
            palavraCriptografada[i] = palavra[i];//caracateres não letra
        }
    }
    palavraCriptografada[i]='\0'; //para indicar fim de palavra = vazio
    printf("\nPalavra normal:        %s",palavra);
    printf("\nPalavra criptografada: %s",palavraCriptografada);
}
int main(){
    char chave[27];//chave a receber do usuario e ver se bate com a criptografia
    char palavra[27];//palavra a ser criptografada
    while(1){
        printf("\nChave de criptografia (26 digitos):");
        scanf("%26s",chave);//verifica se a senha(chave) é a mesma de inicialização 'chaveCriptografia'
        if(tam(chave)!=26)
            printf("\nA chave de criptografia informada não contém 26 digitos\n");
        else{
            printf("\nInforma a palavra que deseja criptografar:");
            scanf("%26s",palavra);
            criptografar(palavra,chave);
            break;
        }
        
    }
    return 0;
}