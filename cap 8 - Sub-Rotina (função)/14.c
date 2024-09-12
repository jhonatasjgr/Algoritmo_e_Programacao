#include <stdio.h>
void cadastrar(int *x,int ta,int tb){
    for(int i=0;i<30;i++){
        scanf("%d",&x[i]);
        if(x[i]>0) ta++;
        else tb++;
    }
}
void separaVetor(int *x, int *a, int *b) {
    int ta = 0,tb = 0;
    
    for (int i = 0; i < 30; i++) {
        if (x[i] > 0) {
            a[ta] = x[i];
            (ta)++;
        } else {
            b[tb] = x[i];
            (tb)++;
        }
    }
}
int main()
{
    int x[30],tb=0,ta=0;
    
    cadastrar(x,ta,tb);
    
    int a[ta],b[tb];
    
  separaVetor(x, a, b);

    printf("Vetor A (maiores que zero):\n");
    for (int i = 0; i < ta; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Vetor B (menores ou iguais a zero):\n");
    for (int i = 0; i < tb; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}