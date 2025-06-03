#include <stdio.h>
#include <math.h>

int main() {
    float n;int categ;
    
    printf("Informe o numero para fazer operação: \n ");
    scanf("%f",&n);
    printf("101 - Raiz quadrada\n102 - A metade\n103 - 10 porcento do número\n104 - O dobro\nEscolha a opção:\n ");
    printf("Informe operação desejada: \n ");
    scanf("%d",&categ);
    switch(categ){
        case 101:
        printf("A raiz quadrada de %.2f é %.2f",n,sqrt(n));
        break;
        case 102:
        printf("A metade de %.2f é %.2f",n,n/2);
        break;
        case 103:
        printf("10 Porcento de %.2f é %.2f",n,((n/10)*100));
        break;
        case 104:
        printf("O dobro de %.2f é %.2f",n,n*2);
        break;
        default:
        printf("Numero invalido");
    }
    
    return 0;
}
