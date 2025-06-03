#include <stdio.h>

int main() {
    int X=1,cout=0;
    float y=0,media;
    
    while(X!=0){
        printf("Informe o numero par:\n");
        scanf("%d", &X);
        if(X%2==0){
           y+=X;
           cout++;
        }
        if(X==0){
           cout=cout-1;
        }
        if(X%2!=0){
           printf("Isso não é um numero par,Por Favor informe um numero par.\n\n");
        }
    }
        media=y/cout;
        printf("A Media foi de:%.2f",media);
    return 0;
}
