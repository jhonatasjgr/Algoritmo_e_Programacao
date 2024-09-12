#include <stdio.h>
int divisivel(int n, int m){
    if(n%m==0) return 0;
    return 1;
}
int main(){
   
    printf("divisivel = %d",divisivel(4,2));
    return 0;
}