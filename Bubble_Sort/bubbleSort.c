#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"

void imprimir_arr(int *arr,int n){
    for(int i=0;i < n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int main(int argc, char* argv[]){
    
    //Criando o algoritmo Bubble Sort
    int array[] = {12,33,48,95,200,0,102};
    int n = sizeof(array)/sizeof(int);

    imprimir_arr(array,n);
    return 0;
}