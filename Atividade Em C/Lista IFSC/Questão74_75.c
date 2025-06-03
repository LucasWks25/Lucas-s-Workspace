#include <stdio.h>
#include <math.h>

int main() {
    float n,valor,preco;int categ;
    
    printf("1 - Venda à Vista\n2 - Venda a Prazo 30 dias\n3 - Venda a Prazo 60 dias\n4 - Venda a Prazo com 90 dias\n5 - Venda com cartão de débito\n6 - Venda com cartão de crédito\nEscolha a opção:\n ");
    printf("Informe operação desejada: \n ");
    scanf("%d",&categ);
    printf("Informe operação desejada: \n ");
    scanf("%f",&valor);
    
    switch(categ){
        case 1:
        preco=0.10;
        valor=valor-(valor*preco);
        printf("O preco ficará por R$%.2f",valor);
        break;
        case 2:
        preco=0.05;
        valor=valor-(valor*preco);
        printf("O preco ficará por R$%.2f",valor);
        break;
        case 3:
        printf("O preco ficará por R$%.2f",valor);
        break;
        case 4:
        preco=0.05;
        valor=valor+(valor*preco);
        printf("O preco ficará por R$%.2f",valor);
        break;
        case 5:
        preco=0.08;
        valor=valor-(valor*preco);
        printf("O preco ficará por R$%.2f",valor);
        break;
        case 6:
        preco=0.07;
        valor=valor-(valor*preco);
        printf("O preco ficará por R$%.2f",valor);
        break;
        default:
        printf("Numero invalido");
    }
    
    
    return 0;
}
