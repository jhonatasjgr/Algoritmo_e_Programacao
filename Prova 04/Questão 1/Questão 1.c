#include <stdio.h>
//funcao que realiza a soma de todos os elementos do array
int soma_array(int array[],int tamanho){
    int soma=0;
    for(int i=0;i<tamanho;i++)
        soma+=array[i];
    return soma;
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("A soma dos elementos do array é: %d\n",soma_array(array,n));
    

    return 0;
}