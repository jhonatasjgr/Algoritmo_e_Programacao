#include <stdio.h>
float media(float notas[10][4], int i){
    float x=0.0;
    for(int j=0;j<4;j++)
        x+=notas[i][j];
    return x/4;
}
int main(){
    int numeros[]={1,2,3,4,5,6,7,8,9,10};
    float notas[10][4] = {
        {8.5, 7.0, 9.1, 6.5},
        {7.2, 0.0, 6.9, 7.8},
        {9.0, 5.5, 8.7, 7.3},
        {6.8, 0.9, 8.4, 9.1},
        {7.5, 6.7, 0.2, 8.0},
        {8.9, 7.6, 7.3, 6.9},
        {6.5, 8.4, 7.8, 9.0},
        {7.1, 6.6, 8.3, 7.7},
        {8.2, 9.0, 6.8, 8.5},
        {7.4, 8.1, 0.3, 6.7}
    };
    for(int i=0;i<10;i++){
        float m = media(notas,i);
        printf("\nMédia do aluno %d = %.1f",numeros[i],m);
        if(m<6) printf("  -> Recuperação");
    }

    return 0;
}