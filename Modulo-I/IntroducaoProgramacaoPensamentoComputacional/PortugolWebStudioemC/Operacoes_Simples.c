#include <stdio.h>

//prot�tipo da fun��o
void operacoes_simples(float a, float b);

//fun��o principal
void main(){
    //definindo vari�vel
    float a,b, soma, sub, mult, div;

    //Lendo vari�vel
    printf("Digite os valores de a e b: \n");
    scanf("%f %f", &a, &b);

    //fun��o de auxilio
    operacoes_simples(a,b);

    //pausa do sistema
    system("pause");

}

//fun��o de auxilio
void operacoes_simples(float a, float b){
    float soma, sub, mult, div;

    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("SOMA %.1f\n", soma);
    printf("SUBTRACAO %.1f\n", sub);
    printf("MULTIPLICACAO %.1f\n",mult);
    printf("DIVISAO %.1f\n\n", div);

}
