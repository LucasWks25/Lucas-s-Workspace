#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;

    printf("Jogo: Pedra (1), Papel (2), Tesoura (3)\n");
    printf("Escolha sua jogada (1 a 3): ");
    scanf("%d", &jogador);

    if (jogador < 1 || jogador > 3) {
        printf("Jogada invalida!\n");
    
    }

    srand(time(NULL)); 
    computador = rand() % 3 + 1;

    
    char *opcoes[] = {"", "Pedra", "Papel", "Tesoura"};
    printf("Voce jogou: %s\n", opcoes[jogador]);
    printf("Computador jogou: %s\n", opcoes[computador]);

    
    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 1 && computador == 3) ||
               (jogador == 2 && computador == 1) ||
               (jogador == 3 && computador == 2)) {
        printf("Voce venceu!\n");
    } else {
        printf("Voce perdeu!\n");
    }
    return 0;
}
