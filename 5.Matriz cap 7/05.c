//Questão feita mas não testada
#include <stdio.h>

int main(){
    float vendas[12][4];//12 = meses / 4 = semanas de cada mês
    float totalAno=0, TotalMes=0,TotalSemana=0;
    for(int i=0;i<12;i++)
        for(int j=0;j<4;j++){
            scanf("%f",&vendas[i][j]);
            totalAno+=vendas[i][j];
        }
    for(int i=0;i<12;i++){
        for(int j=0;j<4;j++)
            TotalMes+=vendas[i][j];
        if(i+1==1) printf("\nvenda de Janeiro =%.2f",TotalMes);
        else if(i+1==2)printf("\nvenda de Fevereiro =%.2f",TotalMes);
        else if(i+1==3)printf("\nvenda de Março =%.2f",TotalMes);
        else if(i+1==4)printf("\nvenda de Abril =%.2f",TotalMes);
        else if(i+1==5)printf("\nvenda de Maio =%.2f",TotalMes);
        else if(i+1==6)printf("\nvenda de Junho =%.2f",TotalMes);
        else if(i+1==7)printf("\nvenda de Julho =%.2f",TotalMes);
        else if(i+1==8)printf("\nvenda de Agosto =%.2f",TotalMes);
        else if(i+1==9)printf("\nvenda de Setembro =%.2f",TotalMes);
        else if(i+1==10)printf("\nvenda de Outubro =%.2f",TotalMes);
        else if(i+1==11)printf("\nvenda de Novembro =%.2f",TotalMes);
        else if(i+1==12)printf("\nvenda de Dezembro =%.2f",TotalMes);
        TotalMes=0;
    }
    for(int j=0;j<4;j++){
        for(int i=0;i<12;i++)
            TotalSemana+=vendas[i][j];
        printf("\nTotal de vendas da semana %d = %.2f",j+1,TotalSemana);
        TotalSemana=0;
    }       
    printf("\nTotal de vendas no ano = %.2f",totalAno);
    
    return 0;
}