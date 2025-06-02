#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50], nome2[50];
    float peso1, peso2, altura1, altura2;

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);
    printf("Digite o peso da primeira pessoa (em kg): ");
    scanf("%f", &peso1);
    printf("Digite a altura da primeira pessoa (em metros): ");
    scanf("%f", &altura1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Digite o peso da segunda pessoa (em kg): ");
    scanf("%f", &peso2);
    printf("Digite a altura da segunda pessoa (em metros): ");
    scanf("%f", &altura2);

    if (peso1 > peso2) {
        printf("A pessoa mais pesada é: %s\n", nome1);
    } else if (peso2 > peso1) {
        printf("A pessoa mais pesada é: %s\n", nome2);
    } else {
        printf("As duas pessoas têm o mesmo peso.\n");
    }

    if (altura1 > altura2) {
        printf("A pessoa mais alta é: %s\n", nome1);
    } else if (altura2 > altura1) {
        printf("A pessoa mais alta é: %s\n", nome2);
    } else {
        printf("As duas pessoas têm a mesma altura.\n");
    }

    return 0;
}
