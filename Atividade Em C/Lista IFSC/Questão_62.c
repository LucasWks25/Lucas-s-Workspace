#include <stdio.h>

int main() {
    int smedio,credito,p100;
    
    printf("Informe seu saldo médio do ultimo ano\n");
    scanf("%d", &smedio);
    
    if(smedio<=200){
        printf("Nenhum Credito");
    }
    if(smedio>200 && smedio<=400){
        p100=smedio*0.20;
        printf("o seu credito é %d",p100
        }
    if(smedio>401 && smedio<=600){
        p100=smedio*0.30;
        printf("o seu credito é %d",p100);
    }
    if(smedio>=601){
        p100=smedio*0.40;
        printf("o seu credito é %d",p100);
    }
    return 0;
}
