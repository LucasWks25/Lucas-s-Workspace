#include <stdio.h>

int main() {
char nome[100];
float porca,parafuso,arruela;
float desc_porca,desc_parafuso,desc_arruela,desc_total;
float total_bruto,total_cdesc;
int qnt_porcas,qnt_parafuso,qnt_arruela;
porca=2.00;
parafuso=1.50;
arruela=1.00;
    printf("Me informe seu nome: ");
    fgets(nome,sizeof(nome), stdin);
    printf("Informe quantas porcas você comprou: ");
    scanf("%d",&qnt_porcas);
   printf("Informe quantos parafusos você comprou: ");
    scanf("%d",&qnt_parafuso);
    printf("Informe quantas arruelas você comprou: ");
    scanf("%d",&qnt_arruela);
    porca=porca*qnt_porcas;
    parafuso=parafuso*qnt_parafuso;
    arruela=arruela*qnt_arruela;
    desc_porca=porca*0.10;
    desc_parafuso=parafuso*0.20;
    desc_arruela=arruela*0.30;
    desc_total=desc_porca+desc_parafuso+desc_arruela;
    total_bruto=porca+parafuso+arruela;
    total_cdesc=total_bruto-desc_total;
    printf("\nCliente: %s", nome);
    printf("Parafusos: %d unidades\n", qnt_parafuso);
    printf("Porcas: %d unidades\n", qnt_porcas);
    printf("Arruelas: %d unidades\n", qnt_arruela);
    printf("\nTotal bruto: R$ %.2f\n", total_bruto);
    printf("Total de desconto: R$ %.2f\n", desc_total);
    printf("Total a pagar: R$ %.2f\n", total_cdesc);
    return 0;
}
