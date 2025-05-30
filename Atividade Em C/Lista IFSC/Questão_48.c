#include <stdio.h>

int main() {;
    int a,b,c,temp;
    printf("Informe o valor do Primeiro numero:\n");
    scanf("%d",&a);
    printf("Informe o valor do Segundo numero:\n");
    scanf("%d",&b);
    printf("Informe o valor do Terceiro numero:\n");
    scanf("%d",&c);
    if(b>c){
    temp=b;
    b=c;
    }if(a>c){
    temp=c;
    }
    if(a>b){
    temp=b;
    a=b;
    }
    if(c>a){
    temp=a;
    c=a;
    }
    printf("O menor valor é: %d\n",a);    
}
