#include <stdio.h>

//Prot�tipo da fun��o
void media(float nota1,float nota2,float nota3, char nome[15]);

//Fun��o Principal do programa
void main(){

    //Definindo vari�veis
    float nota1,nota2,nota3;
    char nome[15];

    printf("Digite o nome do aluno: \n");
    scanf("%s", nome);
    //Lendo as notas
    printf("Digite o valor de suas notas: \n");
    scanf("%f%f%f",&nota1,&nota2,&nota3);

    //Fun��o auxiliar
    media(nota1,nota2,nota3,nome);

    //Pausa do programa
    system("pause");
}

void media(float nota1,float nota2,float nota3, char nome[15]){
    float media;
    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 6 ){
        printf("Parabens!\n%s voce passou.\n\n", nome);
    }   else {
        printf("%s Reprovado =(\n\n", nome);
    }
}
