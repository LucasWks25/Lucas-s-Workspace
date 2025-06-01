#include <stdio.h>

int main() {
    int num1;

    printf("Informe o numero:\n");
    scanf("%d", &num1);
    
    if(num1%2==0 && num1>0){
        printf("O número é par e positivo");
    }
    if(num1%2!=0 && num1>0){
        printf("O número é impar e positivo");
    }
     if(num1%2==0 && num1<0){
        printf("O número é par e negativo");
    }
    if(num1%2!=0 && num1<0){
        printf("O número é impar e negativo");
    }
    return 0;
}
