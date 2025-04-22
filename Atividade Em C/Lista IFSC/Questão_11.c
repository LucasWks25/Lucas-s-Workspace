#include <stdio.h> 

int main() { 

   float ht,vh,pd,sb,td,sl; 

   printf("Informe suas horas trabalhadas: "); 
   scanf("%f",&ht); 
   printf("Informe o valor da sua hora trabalhada: "); 
   scanf("%f",&vh); 
   printf("Informe o percentual de desconto:"); 
   scanf("%f",&pd); 
   sb=ht*vh; 
   td=(pd/100)*sb; 
   sl=sb-td; 
   printf("Horas Trabalhadas: %.2f\n",ht); 
   printf("Salario Bruto: %.2f\n",sb); 
   printf("Desconto: %.2f\n",td); 
   printf("Salario Liquido: %.2f\n",sl); 
  
    return 0; 

} 
