#include <stdio.h>
int forma(int l1, int l2, int l3){
    if(l1==0 || l2 ==0 || l3 ==0) return 0;
    if(l1<l2+l3 || l2<l1+l3 || l3< l1+l2) return 1;
}
void tipo(int l1, int l2, int l3){
    if(l1==l2 && l2==l3) printf("Equilatero");
    else if(l1!=l2 && l1 !=l3 && l2!=l3) printf("Escaleno");
    else printf("Isosceles");
}
int main() 
{
   int l1,l2,l3;
   scanf("%d %d %d",&l1,&l2,&l3);
   
  (forma(l1,l2,l3)) ? tipo(l1,l2,l3):printf("Os lados digitados não forma triangulo");

    return 0;
}