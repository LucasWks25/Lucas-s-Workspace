#include <stdio.h>

int main() {
    int a,b,c;
    // Write C code here
    printf("Informe três numeros: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }
  if (a > c) {
    int temp = a;
    a = c;
    c = temp;
  }
  if (b > c) {
    int temp = b;
    b = c;
    c = temp;
  }
  // Imprime os números em ordem crescente
  printf("A ordem crescente é: %d, %d, %d\n", a, b, c);

    return 0;
}
