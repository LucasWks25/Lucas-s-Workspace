#include <stdio.h>
#include <string.h>

int main() {
    float media,n[3];
    char nome[20],sobrenome[20],ncompleto[100];
    
    printf("Informe seu nome: ");
    scanf("%s",&nome);
     printf("Informe seu sobrenome: ");
    scanf("%s",&sobrenome);
     strcpy(ncompleto, nome);
        strcat(ncompleto, sobrenome);
    printf("Informe sua nota em português: ");
    scanf("%f",&n[0]);
    printf("Informe sua nota em Matemática: ");
    scanf("%f",&n[1]);
    printf("Informe sua nota em Conhecimentos Gerais: ");
    scanf("%f",&n[2]);
    media=(n[0]+n[1]+n[2])/3;
    if(media>=7){
        printf("Nome: %s \n ",ncompleto);
        printf("Nota em Português: %.1f\n",n[0]);
        printf("Nota em Matemática: %.1f\n",n[1]);
        printf("Nota em Conhecimentos Gerais: %.1f\n",n[2]);
        printf("Aprovado");
        
    }else{
        printf("Nome: %s \n",ncompleto);
        printf("Nota em Português: %.1f\n",n[0]);
        printf("Nota em Matemática: %.1f\n",n[1]);
        printf("Nota em Conhecimentos Gerais: %.1f\n",n[2]);
        printf("Reprovado");
    }
    return 0;
}
