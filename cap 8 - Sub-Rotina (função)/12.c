#include <stdio.h>

int potencia(int x, int y){
    if(x == 0 || x==1) return 1;
    if(y==1) return x;
    if(y==2) return x*x;
    
    return x * potencia(x, y-1);
}
int main(){
   
   printf("potencia = %.2lf",(double)potencia(3,3));
   
    return 0;
}