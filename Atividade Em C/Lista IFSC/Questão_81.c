#include <stdio.h>
#include <ctype.h>
int main() {
   int dia;
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    letra = tolower(letra);

    switch (letra) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Vogal\n"); break;
        default:
            if (letra >= 'a' && letra <= 'z')
                printf("Consoante\n");
            else
                printf("Nao e letra do alfabeto\n");
    }
    return 0;
}
