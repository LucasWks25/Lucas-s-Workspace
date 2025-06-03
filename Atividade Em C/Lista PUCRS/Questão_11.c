#include <stdio.h>

int main() {
    int n,a1,r,num4,count=2,x=1;

    printf("Informe o valor de n:\n");
    scanf("%d", &n);
    printf("Informe o valor de a1:\n");
    scanf("%d", &a1);
    printf("Informe o valor de r:\n");
    scanf("%d", &r);
    printf("a1:%d\n",a1);
    num4=a1+r;
    while(x>0){
        printf("a%d:%d\n",count,num4);
        num4=num4+r;
        count++;
        if(count>n){
            break;
        }
        
    }
    return 0;
}
