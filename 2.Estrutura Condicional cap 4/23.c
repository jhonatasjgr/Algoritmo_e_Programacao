
#include <stdio.h>
    float precoUnitario(int cod){
        if(cod>=1&&cod<=10){
         return 10.00;   
        }else if(cod<=20){
            return 15.00;
        }else if(cod<=30){
            return 20.00;
        }else if(cod<=40){
            return 30.00;
        }else{
            return 0;
        }
    }
    float precoTotal(int qtd,float preco){
        return qtd*preco;
    }
    int desconto(float preco){
        if(preco>0&&preco<=250){
            return 5;
        }else if(preco<500){
            return 10;
        }else{
            return 15;
        }
    }
    float precoFinal(int desconto, float precoTotal){
        return precoTotal-(precoTotal*desconto/100);
    }


int main(){
   
    int cod,qtd;
    scanf("%d %d",&cod,&qtd);
    printf("Preço unitario = R$%.2f\n",precoUnitario(cod));
    printf("Preço total da nota = R$%.2f\n",precoTotal(qtd,precoUnitario(cod)));
    printf("Valor desconto = %d\n",desconto(precoTotal(qtd,precoUnitario(cod))));
    printf("Preço final = R$%.2f\n",precoFinal(desconto(precoTotal(qtd,precoUnitario(cod))),precoTotal(qtd,precoUnitario(cod))));
    
    
    return 0;
}
