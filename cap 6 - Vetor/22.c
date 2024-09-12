#include <stdio.h>
int main(){
    
    int a[10],b[11],tamB=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>0){ 
            b[tamB] = a[i];
            tamB++;
        }
    }
    printf("\nVetor resultante\n");
    for(int i=0;i<tamB;i++)
        printf("%d ",b[i]);
    
    return 0;
}