#include <stdio.h>

int main() {
    int a,b,c,temp;
    printf("Informe o valor do Primeiro comprimento:\n");
    scanf("%d",&a);
    printf("Informe o valor do Segundo comprimento:\n");
    scanf("%d",&b);
    printf("Informe o valor do Terceiro comprimento:\n");
    scanf("%d",&c);
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
    if(a==b && b==c){
        printf("O Seu triangulo é Equilátero");
        } else if(a==b||b==c||a==c  ){
        printf("O Seu triangulo é Isóceles");
        }else{
           printf("O Seu triangulo é Escaleno"); 
        }
        } else {
        printf("Os valores fornecidos não formam um triângulo\n");
    
}
}
