#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

void Organizar_valores(int vetor[],int y){
    int aux;

    for(int i = 0;i < y - 1;i++){
        for(int j = 0;j < y - i - 1;j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}