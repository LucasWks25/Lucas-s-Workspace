#include <stdio.h>

int main() {
    int num1,num2,num3,media;

    printf("Informe o primeira valor:\n");
    scanf("%d", &num1);

    printf("Informe o Segundo valor:\n");
    scanf("%d", &num2);
    
    printf("Informe o terceiro valor:\n");
    scanf("%d", &num3);
    
    if(num1>num3 && num1>num2){
    printf("%d ,%d, %d é Maior" ,num3,num2,num1);
    }
     if(num2>num3 && num2>num1){
    printf("%d ,%d, %d é Maior" ,num3,num1,num2);
    }
     if(num3>num2 && num3>num1){
    printf("%d ,%d, %d é Maior" ,num1,num2,num3);
    }
    return 0;
}
