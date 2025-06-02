#include <stdio.h>

int main() {
    float a,b;
    
    printf("Informe o valor de A: ");
    scanf("%f",&a);
    printf("Informe o valor de B: ");
    scanf("%f",&b);
    if(a>b){
    printf("Maior número é: %.2f\nMenor número é: %.2f",a,b);
    }else{
    printf("Maior número é: %.2f\nMenor número é: %.2f",b,a); 
    
    return 0;
}
}
