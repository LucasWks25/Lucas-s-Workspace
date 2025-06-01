#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Informe o valor do Primeiro numero:\n");
    scanf("%d", &a);

    printf("Informe o valor do Segundo numero:\n");
    scanf("%d", &b);

    printf("Informe o valor do Terceiro numero:\n");
    scanf("%d", &c);

    if (a < b) {  
        temp = a;
        a = b;
        b = temp;
    }

    if (a < c) { 
        temp = a;
        a = c;
        c = temp;
    }

    if (b < c) {  
        temp = b;
        b = c;
        c = temp;
    }
    printf("OS valores são: %d %d %d\n", a, b, c);
    return 0;
}
