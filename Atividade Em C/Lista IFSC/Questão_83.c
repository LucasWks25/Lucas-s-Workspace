#include <stdio.h>
#include <ctype.h>
int main() {
   int opcao;
    float a, b, resultado;

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf("%d", &opcao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1:
            resultado = a + b;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            if (b != 0)
                resultado = a / b;
            else {
                printf("Erro: divisao por zero!\n");
                
            }
            printf("Resultado da divisao: %.2f\n", resultado);
            break;
        default:
            printf("Opcao invalida!\n");
    }
    return 0;
}
