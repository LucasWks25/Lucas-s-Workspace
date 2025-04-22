#include <stdio.h> 

int main() { 

    int a,b; 
  
    printf("Fale o valor de a numero: "); 
    scanf("%i",&a); 
    printf("Fale o valor de b numero: "); 
    scanf("%i",&b); 
    a=a+b; 
    b=a-b; 
    a=a-b; 
    printf("O valor de A é %i e o valor de B é %i ",a,b); 

    return 0; 

} 
