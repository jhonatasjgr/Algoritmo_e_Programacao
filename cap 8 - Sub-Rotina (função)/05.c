#include <stdio.h>
#define PI 3.14159
void positivo(int n){
  if(n<0) printf("Negativo");
  else if(n>0) printf("Positivo");
}
int main(){
   
    positivo(0);
    return 0;
}