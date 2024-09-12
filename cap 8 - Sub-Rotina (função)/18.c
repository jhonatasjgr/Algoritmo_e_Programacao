#include <stdio.h>
int primo(int x){
    for(int i=2;i<=x/2;i++)
        if(x%i==0) return 0;
    return 1;
}
int main()
{
   int p=0;
    for(int i=100;i>1;i++)
        if(p==3) break;
        else if(primo(i)==1){
            printf("%d\n",i);
            p++;
        }
    

    return 0;
}