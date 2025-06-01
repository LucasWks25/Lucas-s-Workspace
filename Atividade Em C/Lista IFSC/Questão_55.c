#include <stdio.h>

int main() {
    float num1,num2,num3,media;

    printf("Informe a primeira nota:\n");
    scanf("%f", &num1);

    printf("Informe a Segunda nota:\n");
    scanf("%f", &num2);
    
    printf("Informe a terceira nota:\n");
    scanf("%f", &num3);
    
    media=(num1+num2+num3)/3;       
    if(media<7 && media>4){
    printf("Em Prova Final");
    }if(media>=7){
        printf("Aprovado");
    }
    if(media<4){
        printf("Reprovado");
    }
    
    return 0;
}
