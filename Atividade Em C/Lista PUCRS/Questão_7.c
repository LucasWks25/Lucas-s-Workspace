#include <stdio.h>

int main() {
    float nota1,nota2,nota3,media;
    int codigoa=1,cout=0;
    while(codigoa!=0){
        printf("Informe o codigo do Aluno\n");
        scanf("%d", &codigoa);
        if(codigoa==0){
            break;
        }
        printf("Digite a %dº nota:\n",cout+1);
        scanf("%f", &nota1);
        cout++;
        printf("Digite a %dº nota:\n",cout+1);
        scanf("%f", &nota2);
        cout++;
        printf("Digite a %dº nota:\n",cout+1);
        scanf("%f", &nota3);
        cout++;
        cout=cout-3;
        media=(nota1+nota2+nota3)/3;
       printf("Candidato seu codigo é : %d votos\n",codigoa);
       printf("A sua Media é: %.1f votos\n\n",media);
       }
    return 0;
}
