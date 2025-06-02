#include <stdio.h>

int main() {
    int dia, mes, signo;

    printf("Informe o dia do seu nascimento: ");
    scanf("%d", &dia);

    printf("Informe o mes do seu nascimento (1-12): ");
    scanf("%d", &mes);

    if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)) {
        signo = 1; // Aquário
    } else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) {
        signo = 2; // Peixes
    } else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) {
        signo = 3; // Áries
    } else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) {
        signo = 4; // Touro
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        signo = 5; // Gêmeos
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21)) {
        signo = 6; // Câncer
    } else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22)) {
        signo = 7; // Leão
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        signo = 8; // Virgem
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        signo = 9; // Libra
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        signo = 10; // Escorpião
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        signo = 11; // Sagitário
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20)) {
        signo = 12; // Capricórnio
    } else {
        printf("Data inválida.\n");
        return 1;
    }

    printf("Você é do seguinte signo do zodíaco: ");

    switch(signo) {
        case 1: printf("Aquário\n"); break;
        case 2: printf("Peixes\n"); break;
        case 3: printf("Áries\n"); break;
        case 4: printf("Touro\n"); break;
        case 5: printf("Gêmeos\n"); break;
        case 6: printf("Câncer\n"); break;
        case 7: printf("Leão\n"); break;
        case 8: printf("Virgem\n"); break;
        case 9: printf("Libra\n"); break;
        case 10: printf("Escorpião\n"); break;
        case 11: printf("Sagitário\n"); break;
        case 12: printf("Capricórnio\n"); break;
    }

    return 0;
}
