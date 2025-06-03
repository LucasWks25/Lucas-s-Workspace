#include <stdio.h>

int main() {
    int x,cout;
    float xmedia,y;
    cout=0;
    y=0;
    while(x>=0){
        printf("Digite o %dº numero:\n",cout+1);
        scanf("%d", &x);
       if(x>0){
       y+=x;
       cout++;
       }
    }
    xmedia=y/cout;
    printf("O valor da media aritmetica é de: %.2f",xmedia);
    return 0;
}
