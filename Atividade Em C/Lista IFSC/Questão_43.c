#include <stdio.h>
#include <ctype.h> 

int main() {
    char nome[100],categ;
    float salario,aumento;
    printf("Informe seu nome: ");
    fgets(nome,sizeof(nome),stdin);
    printf("Informe a categoria do Funcionario A-Z: ");
    scanf("%c",&categ);
    printf("Informe o Salario ");
    scanf("%f",&salario);
    categ=toupper(categ);
    if(categ=='A' || categ=='C' || categ=='F' || categ=='H'){
        aumento=salario*0.10;
    }else if(categ=='B' || categ=='D' || categ=='E' || categ=='I'|| categ=='J'|| categ=='T'){ 
        aumento=salario*0.15;
    }else if(categ=='L' || categ=='M' || categ=='N' || categ=='O'|| categ=='P'|| categ=='S'){ 
        aumento=salario*0.35;
    }else if(categ=='U' || categ=='V' || categ=='X' || categ=='Y'|| categ=='W'|| categ=='Z'){ 
        aumento=salario*0.50;
    }else{
        aumento=0;
    }
    printf("Nome: %s\n",nome);
    printf("Categoria: %c\n",categ);
    printf("Salario: %.2f\n",+salario+aumento);
}
