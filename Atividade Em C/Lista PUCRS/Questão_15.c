
#include <stdio.h>

int main() {
    int couty=0,coutx=0,cout=0,x=1,coutz=0,coutw=0;
    
    while(x>0){
    printf("Informe o %dº número (o numero < 0 encerra o loop):\n ",cout+1);
    scanf("%d",&x);
    cout++;
    if(x>=0 && x<=25){
    coutw++;
    }
    if(x>=26 && x<=50){
    couty++;
    }
    if(x>=51 && x<=75){
    coutx++;
    }
    if(x>=76 && x<=100){
    coutz++;
    }
    if(x>100){
        printf("Informe um numero valido\n");
    }
    printf("Os numeros entre 0-25 é:%d\n",coutw);
    printf("Os numeros entre 26-50 é:%d\n",couty);
    printf("Os numeros entre 50-75 é:%d\n",coutx);
    printf("Os numeros entre 76-100 é:%d\n",coutz);
    }
    return 0;
}
