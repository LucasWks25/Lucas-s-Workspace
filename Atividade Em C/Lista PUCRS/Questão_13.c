#include <stdio.h>
double fatorial(float n){
 double vfat;
  if ( n <= 1 ){
    return (1);
  }else{
    vfat = n * fatorial(n - 1);
  }
    return (vfat);
    }
int main() {
    int n,x=0,z,y;
    
    printf("Informe o Valor da quantidade de fatoriais a ser feito:\n ");
    scanf("%d",&n);
    while(x<n){
    printf("Informe o Valor a fazer fatorial:\n ");
    scanf("%d",&z);
    y=z;
    z=fatorial(z);
    printf("O Fatorial de %d é %d\n",y,z,fatorial(z));
    x++;
    }
    return 0;
}
