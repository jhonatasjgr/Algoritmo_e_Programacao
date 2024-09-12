#include <stdio.h>

double soma(int n){
    if(n==1 ) return 1;
    return 1.0/n + soma((n-1));
}
int main(){
   
   printf("soma = %.2lf",soma(3));
   
    return 0;
}