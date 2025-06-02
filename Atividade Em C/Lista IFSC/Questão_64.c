#include <stdio.h>
#include <string.h>

int main() {
    char codigo[4];
    float precoUnitario,qx,total;
    
    printf("ABCD\nXYPK\nKLMP\nQRST\nInforme o numero do pedido:\n");
    scanf("%s", &codigo);
    printf("Informe a quantidade do pedido:\n");
    scanf("%f", &qx);
     if (strcmp(codigo, "ABCD") == 0) {
        precoUnitario = 5.30;
    } else if (strcmp(codigo, "XYPK") == 0) {
        precoUnitario = 6.00;
    } else if (strcmp(codigo, "KLMP") == 0) {
        precoUnitario = 3.20;
    } else if (strcmp(codigo, "QRST") == 0) {
        precoUnitario = 2.50;
    } else {
        printf("Código inválido!\n");
        return 1;
    }
    total = precoUnitario * qx;

    printf("O preço total é: R$ %.2f\n", total);
    
    return 0;
}
