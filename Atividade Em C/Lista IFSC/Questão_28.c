#include <stdio.h>

int main() {
    int m,n;
    printf("informe um numero de 3 caracteres: ");
    scanf("%d",&n);
    m = (n % 10) * 100 + ((n % 100) / 10) * 10 +(n/100);
    printf("Seus Números São %d e %d",n,m);
    return 0;
}
