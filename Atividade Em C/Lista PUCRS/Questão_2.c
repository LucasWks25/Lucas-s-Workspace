// Online C compiler to run C program online
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
    float e;
    int n;
    printf("Informe o Valor de n: ",n);
    scanf("%d",&n);
    e=1+1/1+1/2+1/6+1/(fatorial(n));
    printf("%.2f são negativos",e);
    
    return 0;
}
