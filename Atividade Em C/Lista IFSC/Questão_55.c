#include <stdio.h>

int main() {
    int num1,num2,num3,media;

    printf("Informe a primeira nota:\n");
    scanf("%d", &num1);

    printf("Informe a Segunda nota:\n");
    scanf("%d", &num2);
    
    printf("Informe a terceira nota:\n");
    scanf("%d", &num3);
    
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
