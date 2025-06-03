#include <stdio.h>

int main() {
   int I;
    float A, B, C, temp;
    printf("Digite I (1, 2 ou 3): ");
    scanf("%d", &I);
    printf("Digite A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    if (I == 1) {
        if (A > B) { temp = A; A = B; B = temp; }
        if (A > C) { temp = A; A = C; C = temp; }
        if (B > C) { temp = B; B = C; C = temp; }
    } else if (I == 2) {
        if (A < B) { temp = A; A = B; B = temp; }
        if (A < C) { temp = A; A = C; C = temp; }
        if (B < C) { temp = B; B = C; C = temp; }
    } else if (I == 3) {
        if ((A > B && A < C) || (A < B && A > C))
            printf("%.2f %.2f %.2f\n", B, A, C);
        else if ((B > A && B < C) || (B < A && B > C))
            printf("%.2f %.2f %.2f\n", A, B, C);
        else
            printf("%.2f %.2f %.2f\n", A, C, B);
        
    } else {
        printf("Valor de I invalido!\n");
    }

    printf("%.2f %.2f %.2f\n", A, B, C);
    return 0;
}
