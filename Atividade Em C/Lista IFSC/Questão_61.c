#include <stdio.h>

int main() {
    int x;
    float nota1,nota2,nota3,total;

    printf("1-Aritmética\n2-Ponderada (Pesos 3,3,4)\nInforme o numero da media a ser calculada   :\n");
    scanf("%d", &x);
    printf("Informe a Primeira nota:\n");
    scanf("%f", &nota1);
    printf("Informe a Segunda nota:\n");
    scanf("%f", &nota2);
    printf("Informe a Terceira nota:\n");
    scanf("%f", &nota3);
    if(x==1){
        total=(nota1+nota2+nota3)/3;
        printf("A Media é %.1f",total);
    }
    if(x==2){
        total=(nota1*3+nota2*3+nota3*4)/10;
        printf("A Media é %.1f",total);
    }
    if(x!=1 && x!=2){
        printf("Informe um numero valido\n");
    }
    return 0;
}
