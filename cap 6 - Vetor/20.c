#include <stdio.h>
int main(){
    
    int v[10];
    for(int i=0;i<10;i++)
        scanf("%d",&v[i]);
    printf("\nNumeros positivos\n");
    for(int i=0;i<10;i++)
        if(v[i]>0)
            printf("%d  ",v[i]);
    return 0;
}