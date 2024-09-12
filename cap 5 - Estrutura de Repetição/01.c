#include <stdio.h>
void crescente(int n[5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(n[j]>n[i]){
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    printf("Valores crescentes: ");
    for(int i=0;i<5;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
}
void decrescente(int n[5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(n[j]<n[i]){
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    printf("Valores decrescentes: ");
    for(int i=0;i<5;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
}
void printar(int n[5]){
    printf("Valores: ");
    for(int i=0;i<5;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
}


int main()
{
    int numeros[5];
    for(int i=0;i<5;i++){
        scanf("%d %d %d %d %d",&numeros[0],&numeros[1],&numeros[2],&numeros[3],&numeros[4]);
        printar(numeros);
        crescente(numeros);
        decrescente(numeros);
    }
    

    return 0;
}
