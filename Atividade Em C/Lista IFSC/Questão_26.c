#include <stdio.h> 

 int main() {
  
 float sal,salb,salc;  
 printf("Informe o seu salario : "); 
 scanf("%f",&sal);
 salb=0.10*sal;
 salc=sal-salb;
 printf("Seu Salario após o INSS é %.2f e Seu salario liquido é %.2f",salc,salc-(salc*0.05));

return 0;
}
