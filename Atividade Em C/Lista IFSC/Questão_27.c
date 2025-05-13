#include <stdio.h> 

 int main() {
  
 int a,b,c,d,e;
 int p;
 int s;
 

 printf("Informe de a : "); 
 scanf("%i",&a);
 printf("Informe de b : "); 
 scanf("%i",&b);
 printf("Informe de c : "); 
 scanf("%i",&c);
 printf("Informe de d : "); 
 scanf("%i",&d);
 printf("Informe de e : "); 
 scanf("%i",&e);
 
 s=6*a+5*b+4*c+3*d+2*e;
 p=s%7;
 printf("Seu digito verificador é %d ",p); 
 return 0;
}
