#include <stdio.h>
#include <string.h>

//função principal do programa
void main(){
    //definindo variável
    char nome[15];

    //Lendo variável
    printf("Digite seu nome: \n");
    gets(nome);
    imprime_nome(nome);

    //pausa do sistema
    system("pause");
}

//Função imprime variável
void imprime_nome(char nome[15]){

    printf("Seu nome e %s\n\n", nome);
}
