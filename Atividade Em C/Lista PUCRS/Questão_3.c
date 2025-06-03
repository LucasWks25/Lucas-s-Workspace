#include <stdio.h>

int main() {
    float sal,ssal,salm,msal,smenor,cont,filho,sfilho,mfilho,contsalb;
    printf("Digite o salário e o número de filhos (salário negativo para encerrar):\n");
    scanf("%f", &sal);
    while(sal>0){
    printf("Digite o numero de filhos:\n");
    scanf("%f",&filho);
    sfilho+=filho;
    ssal+=sal;
    cont++;
    if(sal>msal){
       msal=sal;
    }
    if(sal<=100){
       contsalb++;
    }
    
    printf("Digite o salário:\n");
    scanf("%f",&sal);
    }
    salm=ssal/cont;
    mfilho=sfilho/cont;
    smenor=((contsalb/cont)*100);
    printf("total de filhos é de %.0f\n",sfilho);
    printf("A Media de salario é de %.2f\n",salm);
    printf("A Media de filhos é de %.2f\n",mfilho);
    printf("O Maior Salario é %.2f\n",msal);
    printf("O Percentual de pessoas com ate R$100 de salario é:  %.1f%\n",smenor);
    
    return 0;
}
