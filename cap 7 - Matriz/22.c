#include <stdio.h>

int main(){
    
    int matriz[7][10];
    for(int i=0;i<6;i++)
        for(int j=0;j<10;j++){
            scanf("%d",&matriz[i][j]);
            if(i==0) matriz[6][j] = 0;
            matriz[6][j]+=matriz[i][j];
        }
            

    printf("\nResultado: \n");
    
    for(int j=0;j<10;j++)
        printf("Col %d = %d\n",j+1,matriz[6][j]);
       
    
    return 0;
}