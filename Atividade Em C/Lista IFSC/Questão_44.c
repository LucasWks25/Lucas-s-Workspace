#include <stdio.h>
#include <ctype.h> 

int main() {
    int tipo1,tipo2,tipo3,quant1,quant2,quant3;
    float preco1,preco2,preco3,total;
    printf("Informe a quantidade de picolés do tipo 1:\n ");
    scanf("%d",&quant1);
    printf("Informe a quantidade de picolés do tipo 2:\n ");
    scanf("%d",&quant2);
    printf("Informe a quantidade de picolés do tipo 3:\n ");
    scanf("%d",&quant3);
    preco1=quant1*0.50;
    preco2=quant2*0.60;
    preco3=quant3*0.75;
    total=preco1+preco2+preco3;
    printf("Você comprou %d picolés tipo 1:\n ",quant1);
    printf("Você comprou %d picolés tipo 2:\n ",quant2);
    printf("Você comprou %d picolés tipo 3:\n ",quant3);
    printf("O Valor total das compras foi: R$%.2f\n",total);
    
}
