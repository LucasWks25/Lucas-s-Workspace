#include <stdio.h>

int main() {
    float dep,ret,saldo,sdop;
    int nbanc,op;
    printf("Informe o número da sua conta:  ");
    scanf("%d",&nbanc);
    printf("Informe o saldo da conta:  ");
    scanf("%f",&saldo);
    printf("Informe o numero da operação que deseja fazer:\n");
    printf("Retirada - 1\nDeposito - 2\n");
    scanf("%d",&op);
    if(op==1){
    printf("Informe quanto deseja retirar: \n");
    scanf("%f",&ret);
    saldo=saldo-ret;
    printf("O valor após a retirada é: R$ %.2f \n",saldo);
    }if(op==2){
    printf("Informe quanto deseja Depositar: ");
    scanf("%f",&dep);
    saldo=saldo+dep;
    printf("O valor após o deposito é: R$ %.2f \n",saldo);
    }if(op>2){
        printf("Informe um numero Valido\n");
    }if(op<1){
        printf("Informe um numero Valido\n");
    }if(saldo<0){
    printf("Conta estourada\n");
    }
    return 0;
}
