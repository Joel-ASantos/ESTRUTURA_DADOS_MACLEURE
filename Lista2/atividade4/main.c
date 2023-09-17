#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

/*
O seu programa deve implementar o algoritmo bubble sort para ordenar uma lista 
de números passados na chamada do programa e imprimir a lista dos números ordenados como saída.
Exemplo:

./main 54 26 93 17 77 31 44 55 20
Saída: 17 20 26 31 44 54 55 77 93

OBS: os números são passados como argumentos na chamada do programa (argv);
*/

void impressao_valores(int array[], int n){
    for(int i = 0;i < n;i++){
        printf("%d\t",array[i]);
    }
    printf("\n\n");
}
int main(int argc,char *argv[]){
    int numeros[10];
    
    for(int i = 0;i < 10;i++){
        numeros[i-1] = strtol(argv[i], NULL, 10);
    }

    impressao_valores(numeros, 10);
    Organizar_valores(numeros, 10);
    impressao_valores(numeros, 10);
    return 0;
}