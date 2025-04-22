#include <stdio.h> 

int main() { 

  float dist,temp,vel,lit; 

   printf("Informe a velocidade do veiculo em KM/h: "); 
   scanf("%f",&vel); 
   printf("Informe o tempo para chegar ao destino em KM: "); 
   scanf("%f",&temp); 
   dist=temp*vel; 
   lit=dist/12; 
   printf("A velocidade media foi de: %.2fkm/h\n",vel); 
   printf("O tempo de Viagem foi de: %.2f horas\n",temp); 
   printf("A Distancia foi de: %.2fKm\n",dist); 
   printf("A Quantidade de litros abastecidos foi de: %.2fL\n",lit); 

    return 0; 

} 
