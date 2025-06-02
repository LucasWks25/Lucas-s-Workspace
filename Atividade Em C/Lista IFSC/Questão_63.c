#include <stdio.h>

int main() {
    int x;
    float qx,total;
    
    printf("1001\n1324\n6548\n0987\n7623\nInforme o numero do pedido:\n");
    scanf("%d", &x);
    printf("Informe a quantidade do pedido:\n");
    scanf("%f", &qx);
    if(x==1001){
    total=qx*5.32;
    printf("Codigo do Produto:%d\nProdutos registrados: %.0f\nValor: R$%.2f",x,qx, total);
    }
    if(x==1324){
    total=6.45*qx;
    printf("Codigo do Produto:%d\nProdutos registrados: %.0f\nValor: R$%.2f",x,qx, total);
    }
    if(x==6548){
    total=2.37*qx;
    printf("Codigo do Produto:%d\nProdutos registrados: %.0f\nValor: R$%.2f",x,qx, total);
    }
    if(x==987){
    total=5.32*qx;
    printf("Codigo do Produto:0%d\nProdutos registrados: %.0f\nValor: R$%.2f",x,qx, total);
    }
    if(x==7623){
    total=6.45*qx;
    printf("Codigo do Produto:%d\nProdutos registrados: %.0f\nValor: R$%.2f",x,qx, total);
    }
    if(x!=1001 && x!=1324 && x!=6548 && x!=987 && x!=7623){
        printf("Informe um codigo valido");
    }
    return 0;
}
