#include <stdio.h>

int main() {
    int num1,num2,num3,media;

    printf("Informe a primeira nota:\n");
    scanf("%d", &num1);

    printf("Informe a Segunda nota:\n");
    scanf("%d", &num2);
    
    printf("Informe a terceira nota:\n");
    scanf("%d", &num3);
    
    if(num1>=num2 && num1>=num3){
        media=(num1*4+num2*3+num3*3)/10;
    }
    if(num2>=num1 && num2>=num3){
        media=(num2*4+num1*3+num3*3)/10;
    }
    if(num3>=num2 && num3>=num1){
        media=(num3*4+num2*3+num1*3)/10;
    }
    if(media>=5)
        printf("Aprovado");
    else
        printf("Reprovado");
    
    return 0;
}
