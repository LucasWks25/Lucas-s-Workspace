#include <stdio.h>

int main() {
    float a,b;
    
    printf("Informe o valor de A: ");
    scanf("%f",&a);
    printf("Informe o valor de B: ");
    scanf("%f",&b);
    if(a>b){
    printf("O Maior número é: %2.f",a);
    }else{
    printf("O Maior número é: %2.f",b); 
    
    return 0;
}
}
