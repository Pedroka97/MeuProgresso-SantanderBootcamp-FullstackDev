#include <stdio.h>
#include <string.h>

//fun��o principal do programa
void main(){
    //definindo vari�vel
    char nome[15];

    //Lendo vari�vel
    printf("Digite seu nome: \n");
    gets(nome);
    imprime_nome(nome);

    //pausa do sistema
    system("pause");
}

//Fun��o imprime vari�vel
void imprime_nome(char nome[15]){

    printf("Seu nome e %s\n\n", nome);
}
