#include <stdio.h>

int main() {
    float num1,num2,media;

    printf("Informe a primeira nota:\n");
    scanf("%f", &num1);

    printf("Informe a Segunda nota:\n");
    scanf("%f", &num2);
    
    media=num1+num2;
    if(media>5){
    printf("Aprovado\n");
    }else{
    printf("Reprovado\n");
}
    printf("A media é: %.2f\n", media);
    
    return 0;
}
