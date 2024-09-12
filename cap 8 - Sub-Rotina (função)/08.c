#include <stdio.h>

int fat(int n){
    if(n==0 || n==1) return 1;
    return n * fat(n-1);
}
int main(){
   
   printf("Fatorial = %d",fat(4));
   
    return 0;
}