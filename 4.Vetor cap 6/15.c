#include <stdio.h>

int main(){
    
    char nomes[15][8];
    int dvd[8];
    for(int i=0;i<8;i++)
        scanf("%s %d",nomes[i],&dvd[i]);
    for(int i=0;i<8;i++)
        printf("\n%s tem %d locações disponíveis",nomes[i],(int)(dvd[i]/10));

    return 0;
}