#include <stdio.h>

int main() {
    float sat,aument,p100;
    
    printf("Informe o Salario atual: ");
    scanf("%f",&sat);
    
    if(sat<=1500 && sat<1750){
    p100=sat*0.12;
    aument=sat+p100;
     
    }
     if(sat>=1750 && sat<2000){
    p100=sat*0.10;
    aument=sat+p100;
     
    }
     if(sat>=2000 && sat<3000){
    p100=sat*0.07;
    aument=sat+p100;
     
    }
     if(sat>=3000){
    p100=sat*0.05;
    aument=sat+p100;
    }
     printf("Seu salario atual é:R$%.2f\n Salario após aumento:R$%.2f ",sat,aument);
    return 0;

}
