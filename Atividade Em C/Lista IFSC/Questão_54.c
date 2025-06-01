#include <stdio.h>

int main() {
    int num1,num2,num3,opcao;

    printf("Informe a Opção 2/3/4:\n");
    scanf("%d", &opcao);

    printf("Informe o valor do Primeiro numero:\n");
    scanf("%d", &num1);

    printf("Informe o valor do Segundo numero:\n");
    scanf("%d", &num2);
    
    printf("Informe o valor do Terceiro numero:\n");
    scanf("%d", &num3);
    
    if(opcao==2){
        printf("Numero é %d",num1);
    }
    if(opcao==3){
        printf("Numero é %d",num2);
    }
    if(opcao==4){
        printf("Numero é %d",num3);
    }if(opcao!=2 && opcao !=3 && opcao!=4){
    printf("Informe um valor valido");
    return 0;
}
}
