#include <stdio.h>
int segundos(int h, int m, int s){
    return (h*60*60)+(m*60)+s;
}
int main(){
   
    printf("Segundos = %d",segundos(2,40,10));
    return 0;
}