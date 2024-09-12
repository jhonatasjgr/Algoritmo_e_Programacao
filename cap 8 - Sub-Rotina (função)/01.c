#include <stdio.h>
int soma(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return n+soma(n-1);
}
int main(){
   
    printf("Soma = %d",soma(10));
    return 0;
}