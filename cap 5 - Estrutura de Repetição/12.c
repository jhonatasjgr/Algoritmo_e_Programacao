#include <stdio.h>
int primo(int n){
    if(n==1){
        return 0;
    }
    for(int x=2;x<=n/2;x++){
        if(n%x==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int primos=0;
    for(int i=1;i<=10;i++){
        int n;
        scanf("%d",&n);
        if(primo(n)==1){
            primos++;
        }
    }
    printf("%d numeros primos digitados",primos);

    return 0;
}
