#include <stdio.h>

int main() {
    int n,b,j,i;
for(i=0;i<20;i++){
    printf("Informe o valor de n%d:\n",i+1);
    scanf("%d", &n);
    printf("Tabuada de 1 ate %d:\n",n);
    for(j=1;j<=n;j++){
        b=j*n;
        printf("%d x %d = %d\n", j, n,j*n);
}
        printf("\n");
}
    return 0;
}
