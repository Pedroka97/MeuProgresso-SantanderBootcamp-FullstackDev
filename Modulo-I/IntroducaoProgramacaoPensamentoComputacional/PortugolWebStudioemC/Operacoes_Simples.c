#include <stdio.h>

//protótipo da função
void operacoes_simples(float a, float b);

//função principal
void main(){
    //definindo variável
    float a,b, soma, sub, mult, div;

    //Lendo variável
    printf("Digite os valores de a e b: \n");
    scanf("%f %f", &a, &b);

    //função de auxilio
    operacoes_simples(a,b);

    //pausa do sistema
    system("pause");

}

//função de auxilio
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
