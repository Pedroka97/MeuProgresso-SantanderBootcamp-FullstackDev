#include <stdio.h>

//fun��o principal do programa
void main (){

    //definindo vari�veis
    int numero;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);
    imprime_numero(numero);

    //pausa do sistema
    system("pause");

}

void imprime_numero(int numero){

    printf("Seu numero e: %d\n\n", numero);
}
