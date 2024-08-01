#include <stdio.h>

int main(){
    int m[4][6],n[6][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<6;j++)
            scanf("%d",&m[i][j]);
    for(int i=0;i<4;i++)
        for(int j=0;j<6;j++)
            scanf("%d",&n[i][j]);
    for(int i=0;i<4;i++){
        int soma=0;
        for(int j=0;j<6;j++){
        soma+=m[i][j];
        soma+=n[j][i];
        }
        printf("Soma da linha %d de M com a coluna %d de N = %d\n",i,i,soma);
    }

    return 0;
}