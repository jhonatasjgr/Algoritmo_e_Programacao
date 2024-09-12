#include <stdio.h>
#define PI 3.14159
double volume(int r){
   return (4.0/3.0) * PI * (r*r*r);
}
int main(){
   
    printf("raio = %lf",volume(1));
    return 0;
}