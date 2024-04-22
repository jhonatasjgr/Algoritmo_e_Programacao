
#include <stdio.h>
float aVista(int codigo[15],float valor[15]){
    float valorAVista=0;
    for(int i=0;i<15;i++){
        if(codigo[i]==1){
            valorAVista+=valor[i];
        }
    }
    return valorAVista;
}
float aPrazo(int codigo[15],float valor[15]){
    float valorAPrazo=0;
    for(int i=0;i<15;i++){
        if(codigo[i]==1){
            valorAPrazo+=valor[i];
        }
    }
    return valorAPrazo;
}
float total(float valor[15]){
    float total=0;
    for(int i=0;i<15;i++){
        total+=valor[i];
    }
    return total;
}
int main()
{
    int i=0,codigo[15];
    float valor[15],primeira;
    
    while(i<15){
        printf("1-Pagamento a vista\n2-Pagamento a prazo\nDigite o codigo de valor da compra: ");
        scanf("%d %f",&codigo[i],&valor[i]);
        if(codigo[i]==2){
            primeira = valor[i]/3;
        }
        i++;
    }
    printf("Compras a vista = R$%.2f",aVista(codigo,valor));
    printf("Compras a prazo = R$%.2f",aPrazo(codigo,valor));
    printf("Compras total = R$%.2f",total(valor));
    printf("Comras 1 parcela a prazo = R$%.2f",primeira);
    return 0;
}
