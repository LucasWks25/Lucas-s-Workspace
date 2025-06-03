#include <stdio.h>
#include <ctype.h>
int main() {
   char letra;
    printf("Digite a primeira letra do estado civil: ");
    scanf(" %c", &letra);
    letra = toupper(letra);

    switch (letra) {
        case 'S': printf("Solteiro\n"); break;
        case 'C': printf("Casado\n"); break;
        case 'V': printf("Viuvo\n"); break;
        case 'D': printf("Divorciado\n"); break;
        case 'Q': printf("Desquitado\n"); break;
        default: printf("Letra invalida!\n"); break;
    }

    return 0;
}
