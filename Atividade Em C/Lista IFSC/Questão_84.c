#include <stdio.h>
#include <string.h>
struct Conta {
    int numero;
    char titular[100];
    float saldo;
};

int main(){
    struct Conta conta;
    int opcao;
    float valor;
  
    printf("Digite o numero da conta: ");
    scanf("%d", &conta.numero);
    printf("Digite o nome do titular: ");
    scanf(" %[^\n]", conta.titular);
    printf("Digite o saldo inicial: ");
    scanf("%f", &conta.saldo);

    do {
        printf("\nMenu:\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Mostrar saldo\n");
        printf("0 - Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:  
                printf("Valor do deposito: ");
                scanf("%f", &valor);
                conta.saldo += valor;
                printf("Deposito realizado. Novo saldo: %.2f\n", conta.saldo);
                break;
            case 2:  
                printf("Valor do saque: ");
                scanf("%f", &valor);
                if (valor <= conta.saldo) {
                    conta.saldo -= valor;
                    printf("Saque realizado. Novo saldo: %.2f\n", conta.saldo);
                } else {
                    printf("Saldo insuficiente!\n");
                }
                break;
            case 3:  
                printf("Conta: %d\nTitular: %s\nSaldo atual: %.2f\n", conta.numero, conta.titular, conta.saldo);
                break;
            case 0:  
                printf("Encerrando operacoes...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}
