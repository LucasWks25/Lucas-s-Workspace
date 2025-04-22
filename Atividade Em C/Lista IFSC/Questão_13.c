#include <stdio.h> 

int main() { 

  float c,f; 
   
  printf("Informe a temperatura em Graus Fahrenheit : "); 
  scanf("%f",&f); 
  c= (f-32)*0.555; 
  printf("Sua temperatura em graus Celsius: %.1f ",c); 

  return 0; 

} 
