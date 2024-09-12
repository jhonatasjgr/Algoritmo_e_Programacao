
#include <stdio.h>
    float aumento(float preco,int categoria){
        if(preco<=25){
            if(categoria>0&&categoria==1){
                return preco+(preco*5/100);
            }else if(categoria==2){
                return preco+(preco*8/100);
            }else{
                 return preco+(preco*10/100);
            }
        }else{
            if(categoria>0&&categoria==1){
                 return preco+(preco*12/100);
            }else if(categoria==2){
                 return preco+(preco*15/100);
            }else{
                 return preco+(preco*18/100);
            }
        }
    }
    float imposto(float preco,int categoria,char situacao){
        if(categoria==2||situacao=='R'){
            return preco-(preco*5/100);
        }else{
            return preco-(preco*8/100);
        }
    }

int main()
{
    float preco;
    int categoria;
    char situacao;
    
    printf("Preço: ");
    scanf("%f",&preco);
    printf("\n1 — limpeza\n2 — alimentação\n3 — vestuário\nCategoria: ");
    scanf("%d",&categoria);
    printf("\nR — produtos que necessitam de refrigeração\nN — produtos que não necessitam de refrigeração\nSituação: ");
    scanf("%c",&situacao);
    
    preco = imposto(aumento(preco,categoria),categoria,situacao);
    
    if(preco<=50){
        printf("\nNovo Preço: R$%.2f\nCategoria: Barato",preco);
    }else if(preco<120){
         printf("\nNovo Preço: R$%.2f\nCategoria: Normal",preco);
    }else{
         printf("\nNovo Preço: R$%.2f\nCategoria: Caro",preco);
    }
    
    return 0;
}
