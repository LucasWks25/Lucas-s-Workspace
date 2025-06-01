#include <stdio.h>

int main() {
    int x;
    float qx,total;

    printf("100 cachorro quente\n101 Bauru simples\n102 bauru c/ovo\n103 Hamburguer\n104 CheeseBurguer\n105 Refrigerante\nInforme o numero do pedido:\n");
    scanf("%d", &x);
    printf("Informe a quantidade do pedido:\n");
    scanf("%f", &qx);
    if(x==100){
    total=qx*1.10;
    printf("Você comprou %.0f cachorro quentes e ficou no valor de %.2f",qx, total);
    }
    if(x==101){
    total=1.30*qx;
    printf("Você comprou %.0f Baurus Simples e ficou no valor de %.2f",qx,total);
    }
    if(x==102){
    total=1.50*qx;
    printf("Você comprou %.0f Baurus c/ovo e ficou no valor de %.2f",qx,total);
    }
    if(x==103){
    total=1.10*qx;
    printf("Você comprou %.0f Hamburguers e ficou no valor de %.2f",qx,total);
    }
    if(x==104){
    total=1.30*qx;
    printf("Você comprou %.0f Cheeseburguers e ficou no valor de %.2f",qx,total);
    }
    if(x==105){
    total=1.00*qx;
    printf("Você comprou %.0f Refrigerantes e ficou no valor de %.2f",qx,total);
    }
    else{
        printf("Informe um valor valido");
    }
    return 0;
}
