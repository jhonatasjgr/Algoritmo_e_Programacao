#include <stdio.h>

int tam(char *palavra){//funcao para calcular o tamanho da string
    int tamanho=0;
    for(int i=0;palavra[i]!='\0';i++)
        tamanho++;
    return tamanho;
}
void criptografar(char *palavra,char *chave){//FUNCAO PARA CRIPTOGRAFAR A PALAVRA
    char alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char palavraCriptografada[27];
    int encontrou =0;
    for(int i=0;palavra[i]!='\0';i++){
        for(int j=0;j<26;j++){
            if(palavra[i]==alfabeto[j]){
                palavraCriptografada[i]=chave[j];
                encontrou = 1;
            }
        }
        if(encontrou==0) palavraCriptografada[i]=palavra[i];
        encontrou=0;
    }
   
    printf("\nPalavra normal:        %s",palavra);
    printf("\nPalavra criptografada: %s",palavraCriptografada);
}
int main()
{
    char chave[27];//chave a receber do usuario e ver se bate com a criptografia
    char palavra[27];//palavra a ser criptografada
    while(1){
        printf("\nSenha de criptografia (26 digitos):");
        scanf("%s",chave);//verifica se a senha(chave) é a mesma de inicialização 'chaveCriptografia'
        if(tam(chave)!=26)
            printf("\nA Senha de criptografia informada não contém 26 algarismos\n");
         else{
            printf("\nInforma a palavra que deseja criptografar (TOTALMENTE MAIUSCULA):");
            scanf("%s",palavra);
            criptografar(palavra,chave);
            break;
        }
        
    }
    return 0;
}