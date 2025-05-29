#include <stdio.h>

int main() {
    char produto[100];
    float desc,preco,precodesc,precotot,descp;
    printf("Informe o nome do produto: \n");
    fgets(produto,sizeof(produto),stdin);
    printf("Informe o preço do produto: \n");
    scanf("%f",&preco);
    printf("Informe o desconto no produto: \n");
    scanf("%f",&desc);
    descp=desc/100;
    precodesc=preco*descp;
    precotot=preco-precodesc;
    printf("Nome do produto: %s\n",produto);
    printf("Preço do produto: %.2f\n",preco);
    printf("Preço do desconto: %.2f\n",precodesc);
    printf("preço do produto com desconto: %.2f\n",precotot);
}
