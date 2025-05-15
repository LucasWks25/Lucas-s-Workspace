#include <stdio.h>

int main() {
    int matricula;
    int ano, semestre, ordem;

    printf("Digite o número de matrícula (formato AASDDD): ");
    scanf("%d", &matricula);

    ano = matricula / 10000;               /
    semestre = (matricula / 1000) % 10;    
    ordem = matricula % 1000;           

    printf("Ano da matrícula: 20%02d\n", ano);
    printf("Semestre: %dº semestre\n", semestre);
    printf("Número de ordem da matrícula: %03d\n", ordem);

    return 0;
}
