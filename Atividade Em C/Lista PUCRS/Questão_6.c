#include <stdio.h>

int main() {
    int v,w,x,y,z,cout,cnulo,cbran;
    x=1;y=0;z=0;w=0;v=0;cnulo=0;cbran=0;cout=0;
    while(x!=0){
        printf("Digite o %dº numero:\n",cout+1);
        scanf("%d", &x);
        cout++;
       if(x==1){
       y++;
       }
       if(x==2){
       w++;
       }
       if(x==3){
       z++;
       }
       if(x==4){
       v++;
       }
       if(x==5){
       cnulo++;
       }
       if(x==6){
       cbran++;
       }
       if(x!=1 && x!=2 && x!=3 && x!=4 && x!=5 && x!=6 && x!=0){
       printf("O número %d é invalido, porfavor informe um numero valido\n");
       }
    }
       printf("O candidato 1 recebeu: %d votos\n",y);
       printf("O candidato 2 recebeu: %d votos\n",w);
       printf("O candidato 3 recebeu: %d votos\n",z);
       printf("O candidato 4 recebeu: %d votos\n",v);
       printf("%d votos foram nulos\n",cnulo);
       printf("%d votos foram brancos\n",cbran);
    
    return 0;
}
