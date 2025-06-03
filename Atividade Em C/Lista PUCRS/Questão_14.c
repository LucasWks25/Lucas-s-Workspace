#include <stdio.h>

int main() {
    int coutp=0,coutn=0,cout=0,x=1;
    float z=0,y=0,ymedia=0,zmedia=0,py=0,pz=0;
    
    while(x!=0){
    printf("Informe o %dº número (o numero 0 encerra o loop):\n ",cout+1);
    scanf("%d",&x);
    cout++;
    if(x>0){
    y=x+y;
    coutp++;
    ymedia=y/coutp;
    }
    if(x<0){
    z=x+z;
    coutn++;
    zmedia=z/coutn;
    }
    if(x==0){
    coutp-1;
    }
    pz = ((float)coutn / (float)cout) * 100;
    py = ((float)coutp / (float)cout) * 100;
    
    printf("A media dos numeros positivos é de %.2f\n",ymedia);
    printf("A media dos numeros negativos é de %.2f\n",zmedia);
    printf("A Porcentagem dos numeros positivos é de %.1f%\n",py);
    printf("A Porcentagem dos numeros negativos é de %.1f%\n",pz);
    printf("A Quantidade dos numeros positivos é de %d\n",coutp);
    printf("A Quantidade dos numeros negativos é de %d\n",coutn);
        }
    return 0;
}
