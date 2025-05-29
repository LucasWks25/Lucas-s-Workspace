#include <stdio.h>
int main() {
int b,a,c,d;
    printf("o valor de A:  ");
    scanf("%d",&a);
    printf("o valor de B:  ");
    scanf("%d",&b);
    printf("o valor de C:  ");
    scanf("%d",&c);
    d=a+b;
    if(d==c){
        printf("A+B é igual a C");
    }if(d<c){
        printf("A+B é menor que C");
    }if(d>c){
        printf("A+B é maior que C");
    }
    return 0;
}
