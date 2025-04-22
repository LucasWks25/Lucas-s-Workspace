#include <stdio.h> 

int main() { 

    int a,b,c,d; 

    printf("Fale o valor de a numero: "); 
    scanf("%i",&a); 
    printf("Fale o valor de b numero: "); 
    scanf("%i",&b); 
    printf("Fale o valor de c numero: "); 
    scanf("%i",&c); 
    printf("Fale o valor de d numero: "); 
    scanf("%i",&d); 
    printf("O valor da Multiplicação de Ab é %i\n ",+a*b); 
    printf("O valor da Soma de Ab é %i\n ",+a+b); 
    printf("O valor da Multiplicação de Ac é %i\n ",+a*c); 
    printf("O valor da Soma de Ac é %i\n ",+a+c); 
    printf("O valor da Multiplicação de Ad é %i\n ",+a+d); 
    printf("O valor da Soma de Ad é %i \n",+a*d); 
    printf("O valor da Multiplicação de Bc é %i\n ",+b*c); 
    printf("O valor da Soma de Bc é %i\n ",+b+c); 
    printf("O valor da Multiplicação de Bd é %i\n ",+b*d); 
    printf("O valor da Soma de Bd é %i\n ",+b+d); 
    printf("O valor da Multiplicação de Cd é %i\n ",+c*d); 
    printf("O valor da Soma de Cd é %i\n ",+c+d); 

    return 0; 
} 
