#include <stdio.h>

void media(){
    int m=0,n, qtd=0;
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        m+=n;
        qtd++;
    }
    printf("média = %.2f",(double)(m/qtd));
}
int main(){
   
   media();
   
    return 0;
}