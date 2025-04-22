#include <stdio.h> 
#include<string.h> 

int main() { 
  
    char nome[50]; 
    char sobre[50]; 
    printf("fale seu nome: "); 
    fgets(nome,sizeof(nome),stdin); 
    printf("fale seu sobrenome: "); 
    fgets(sobre,sizeof(sobre),stdin); 
    strcat(nome,sobre); 
    printf("Seu nome completo é %s",nome); 
    return 0; 
  
} 
