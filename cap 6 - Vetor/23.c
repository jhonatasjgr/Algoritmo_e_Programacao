#include <stdio.h>
int main(){
    
    int a[5],b[5],ult=4;
    
    for(int i=0;i<5;i++)
        scanf("%d %d",&a[i],&b[i]);
        
    printf("\nvetor resultante\n");
    for(int i=0;i<5;i++){
        printf("%d - %d = %d\n",a[i],b[ult],(a[i]-b[ult]));
        ult--;
    }
   
    
    return 0;
}