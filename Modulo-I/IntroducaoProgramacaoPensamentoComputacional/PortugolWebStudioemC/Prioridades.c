#include <stdio.h>

//prot�tipo da fun��o
void operacoes(float a, float b, float c);

//fun��o principal do programa
void main(){
    //Definindo variaveis
    float a,b,c;

    //Lendo vari�vel
    printf("Digite 3 valores: \n");
    scanf("%f%f%f", &a,&b,&c);

    //Chamando fun��o de aux�lio
    operacoes(a,b,c);


    //pausa do sistema
    system("pause");
}


void operacoes(float a, float b, float c){
    float resultado;

    // Neste exemplo, a opera��o de multiplica��o (*) ser� executada primeiro
    resultado = a + b * c;
    printf("Operacao %.1f + %.1f * %.1f = %.1f \n\n", a,b,c,resultado);

    //Neste exemplo, a opera��o de soma (+) ser� executada primeiro
    resultado = (a + b) * c;
    printf("Operacao (%.1f + %.1f) * %.1f = %.1f \n\n", a,b,c,resultado);

    /*Neste exemplo, a opera��o de divis�o (/) ser� executada primeiro,
    seguida pela opera��o de multiplica��o (*). Por �ltimo, ser�
	executada a opera��o de soma (+). */
    resultado = a + b / c * a;
    printf("Operacao %.1f + %.1f / %.1f * %.1f = %.1f\n\n", a,b,c,a,resultado);


    /*Neste exemplo, a opera��o de soma (+) ser� executada primeiro,
    seguida pela opera��o de multiplica��o (*). Por �ltimo, ser�
    executada a opera��o de divis�o (/).*/
    resultado = (a + b) / (c * a);
    printf("Operacao (%.1f + %.1f) / (%.1f * %.1f) = %.1f\n\n ", a,b,c,a,resultado);
}
