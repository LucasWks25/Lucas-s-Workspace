#include <stdio.h>
#include <string.h>

int main() {
    int dia,mes,ano,y,diaat,mesat,anoat,temp1,temp2,temp3;
    printf("Informe o dia mes e ano escrevendo ddmmaa: ");
    scanf("%d %d %d",&dia,&mes,&ano);
   printf("Informa o dia mês e o ano atual escrevendo ddmmaa: ")
   scanf("%d %d %d",&diaat,&mesat,&anoat);
   temp1=anoat-ano;
   temp2=mesat-mes;
   temp3=temp1*365
   temp1=temp2*30
   
   
    
    return 0;
}
