#include <stdio.h>

int main(){
    
    int matriz[20][10];
    int col[]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<20;i++)
        for(int j=0;j<10;j++){
            scanf("%d",&matriz[i][j]);
            col[j]+=matriz[i][j];
        }
    for(int i=0;i<20;i++){
        for(int j=0;j<10;j++)
            printf("%d ",matriz[i][j]*col[j]);
        printf("\n");
    }

    return 0;
}