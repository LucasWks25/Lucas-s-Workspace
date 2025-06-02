// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[5],x;
    x=0;
    for(int i=0;i<5;i++){
    printf("Informe o Valor do %dº número: ",+i+1);
    scanf("%d",&a[i]);
    if(a[i]<0){
    x=x+1;
    }
    }
    printf("%d são negativos",x);
    
    return 0;
}
