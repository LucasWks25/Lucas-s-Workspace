// Online C compiler to run C program online
#include <stdio.h>
void quadcub(int num){
    printf("O Quadrado de %d é %d \n ",num , num*num);
    printf("O Cubo de %d é %d \n ",num , num*num*num);
}

int main() {
    int num;
    // Write C code here
    printf("informe o numero: \n");
    scanf("%d",&num);
    quadcub(num);
    return 0;
}
