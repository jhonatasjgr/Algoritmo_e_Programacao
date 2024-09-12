#include <stdio.h>

int soma(int n){
    int s=0;
    for(int i=n;i>=1;i--)
        if(n%i==0) s+=i;
    return s;
}
int main(){
   
   printf("soma divisores = %d",soma(4));
   
    return 0;
}