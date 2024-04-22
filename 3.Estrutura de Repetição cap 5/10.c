
#include <stdio.h>

int main()
{
    int i=1,pares, primos;
    while(i<=10){
        int n;
        scanf("%d",&n);
        if(n%2==0){
            pares++;
        }
        int d=0;
        for(int j=1;j<=n;j++){
            if(n%j==0){
                d++;
            }
        }
        
        if(d==2){
            primos++;
        }
        
        i++;
    }
    printf("Pares = %d\nPrimos = %d",pares,primos);

    return 0;
}
