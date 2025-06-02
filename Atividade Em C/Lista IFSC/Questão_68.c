#include <stdio.h>

int main() {
    float sat,aument,p100;
    
    printf("Informe o Salario atual: ");
    scanf("%f",&sat);
    
    p100=sat*0.11;
    if(p100<318.20){
    aument=sat-p100;
    printf("O desconto do seu salario será de: R$%.2f\n",p100);
    printf("Seu salario depois do desconto é de:R$%.2f\n",aument);
    }if(p100>318.20){
    aument=sat-318.20;
    printf("O desconto do seu salario será de: R$318,20\n");
    printf("Seu salario depois do desconto é de:R$%.2f\n",aument);
    }
    return 0;
}
