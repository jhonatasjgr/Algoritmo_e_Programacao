#include <stdio.h>

double soma(int n){
    double s=0.0;
    for(int i=1;i<=n;i++)
        s+=(double)((double)((double)(i*i)+1)/(double)(i+3));
    
    return s;
}
int main(){
   
   printf("soma = %.2lf",(double)soma(3));
   
    return 0;
}