#include <stdio.h>

int main() {
    int num1,num2,num3,media;

    printf("Informe o primeira valor:\n");
    scanf("%d", &num1);

    printf("Informe o Segundo valor:\n");
    scanf("%d", &num2);
   
    if(num1%num2==0 || num2%num1==0){
    printf("São Multiplos");
    }else{
    printf("Não são múltiplos");
    }   
    return 0;
}
