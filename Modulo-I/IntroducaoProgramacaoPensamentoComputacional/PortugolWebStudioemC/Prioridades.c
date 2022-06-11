#include <stdio.h>

//protótipo da função
void operacoes(float a, float b, float c);

//função principal do programa
void main(){
    //Definindo variaveis
    float a,b,c;

    //Lendo variável
    printf("Digite 3 valores: \n");
    scanf("%f%f%f", &a,&b,&c);

    //Chamando função de auxílio
    operacoes(a,b,c);


    //pausa do sistema
    system("pause");
}


void operacoes(float a, float b, float c){
    float resultado;

    // Neste exemplo, a operação de multiplicação (*) será executada primeiro
    resultado = a + b * c;
    printf("Operacao %.1f + %.1f * %.1f = %.1f \n\n", a,b,c,resultado);

    //Neste exemplo, a operação de soma (+) será executada primeiro
    resultado = (a + b) * c;
    printf("Operacao (%.1f + %.1f) * %.1f = %.1f \n\n", a,b,c,resultado);

    /*Neste exemplo, a operação de divisão (/) será executada primeiro,
    seguida pela operação de multiplicação (*). Por último, será
	executada a operação de soma (+). */
    resultado = a + b / c * a;
    printf("Operacao %.1f + %.1f / %.1f * %.1f = %.1f\n\n", a,b,c,a,resultado);


    /*Neste exemplo, a operação de soma (+) será executada primeiro,
    seguida pela operação de multiplicação (*). Por último, será
    executada a operação de divisão (/).*/
    resultado = (a + b) / (c * a);
    printf("Operacao (%.1f + %.1f) / (%.1f * %.1f) = %.1f\n\n ", a,b,c,a,resultado);
}
