#include <stdio.h>
#include <stdlib.h>



//Função principal do programa
void main(){

    //Declarando variável
    int vetor[10],i;

    for (i=0; i <=9;i++){
        vetor[i]= rand() % 10;
        printf("%d\n", vetor[i]);
    }
    printf("\n\n");
    for(i=0; i <10;i++){
        printf("%d\n", vetor[i]);
    }
    printf("\n\n");
    for (i=9; i >=0; i-- ){
        printf("%d\n", vetor[i]);
    }

    //Pausa do programa
    system("pause");
}
