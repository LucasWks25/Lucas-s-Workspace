#include <stdio.h>

int main() {
    int a;
    printf("Qual sua nota:\n");
    scanf("%d",&a);
    if(a>=0 && a<=49){
    printf("Sua nota é: %d\nConceito Insuficiente",a);
    }
    if(a>=50 && a<=64){
    printf("Sua nota é: %d\nConceito Regular",a);
    }
    if(a>=65 && a<=84){
    printf("Sua nota é: %d\nConceito Bom",a);
    }
    if(a>=85 && a<=100){
    printf("Sua nota é: %d\nConceito Ótimo",a);
    }
}
