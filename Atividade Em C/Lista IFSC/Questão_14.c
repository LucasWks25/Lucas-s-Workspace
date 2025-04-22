#include <stdio.h> 

int main() {  

float raio,alt,vol;  
printf("Informe o raio da Garrafa em cm : "); 
scanf("%f",&raio); 
printf("Informe a altura da Garrafa em cm: ");  
scanf("%f",&alt); 
vol=3.14159*(raio*raio)*alt;  
printf("o Volume da garrafa é: %.2f cm³",vol); 

return 0; 
 } 
