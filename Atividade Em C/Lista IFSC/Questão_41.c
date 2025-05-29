#include <stdio.h>

int main() {
    int qnt_vend;
    float salariom,salariotot,valor_vend,vend_total,comissaof,comissaovend;
    printf("informe o valor do salario minimo : ");
    scanf("%f",&salariom);
    printf("informe a quantidade de carros vendida: ");
    scanf("%d",&qnt_vend);
    printf("Informe o valor total da venda: ");
    scanf("%f",&valor_vend);
    comissaof=qnt_vend*50;
    comissaovend=valor_vend*0.05;
    salariotot=salariom*2+comissaof+comissaovend;
    printf("O Salario Fixo é: R$ %.2f \n",+salariom*2);
    printf("A comissão fixa é: R$ %.2f \n",comissaof);
    printf("A comissão sobre carros vendidos  é: R$ %.2f \n",comissaovend);
    printf("O Salario total do vendedor é: R$ %.2f \n",salariotot);
}
