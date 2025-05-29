#include <stdio.h>

int main() {
int dinclient,prodt,troco,notas100,notas10,notas1;

    printf("Informe o Valor do Produto: ");
    scanf("%d",&prodt);
    printf("Informe o Valor fornecido pelo Cliente: ");
    scanf("%d",&dinclient);
    troco=dinclient-prodt;
    notas100=troco/100;
    troco=troco%100;
    notas10=troco/10;
    troco=troco%10;
    notas1=troco;
    printf("Precisará fornecer %d notas de 100\n%d notas de 10\n%d notas de 1 valor",notas100,notas10,notas1);
    return 0;
}
