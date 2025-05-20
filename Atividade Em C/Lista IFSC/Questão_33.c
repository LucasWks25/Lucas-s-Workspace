// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float n1,n2,n3,m;
    printf("Informe a nota da 1 avaliação: ");
    scanf("%f",&n1);
    printf("Informe a nota da 2 avaliação: ");
    scanf("%f",&n2);
    printf("Informe a nota da 3 avaliação: ");
    scanf("%f",&n3);
    m=((n1*2)+(n2*3)+(n3*5))/10;
    printf("Sua media é: %.1f",m);
    return 0;
}
