#include <stdio.h>

int main() {
    int a;
    printf("Qual sua nota:\n");
    scanf("%d",&a);
    if(a>=0 && a<=49){
    printf("Nota Insuficiente");
    }
    if(a>=50 && a<=64){
    printf("Nota Regular");
    }
    if(a>=65 && a<=84){
    printf("Nota Bom");
    }
    if(a>=85 && a<=100){
    printf("Nota Ótimo");
    }
}
