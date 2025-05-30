#include <stdio.h>

int main() {
    char nome[100];
    float valordconta,dias;
    printf("Informe o Seu nome:\n");
    fgets(nome,sizeof(nome),stdin);
    printf("Informe os Dias que ficou no hotel:\n");
    scanf("%f",&dias);
    if(dias>15){
    printf("A Sua taxa de serviço ficará no valor de R$5,50 por dia\n");
    valordconta=(dias*60)+(dias*5.50);
    }if(dias==15){
    printf("A Sua taxa de serviço ficará no valor de R$6,00 por dia\n");
    valordconta=(dias*60)+(dias*6.00);
    }if(dias<15){
    printf("A Sua taxa de serviço ficará no valor de R$8,00 por dia\n");
    valordconta=(dias*60)+(dias*8.00);
    }
    printf("O Valor da sua conta é de: %.2f",valordconta);
    return 0;
}
