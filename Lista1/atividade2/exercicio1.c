#include <stdio.h>
#include <stdlib.h>

/*
Soma dos elementos de um array. 
Escreva uma função que recebe um array de números inteiros 
e retorna a soma de todos os elementos;
*/
int Somando_Array(int array[],int resul){
    resul=0;
    
    for(int i = 0;i < 5;i++){
        resul += array[i];
    }

   printf("\nO resultado e: %d",resul);
}
int main(int args, char*argv[]){
    int numeros[5];
    int soma=0;

    for(int i = 0;i < 5;i++){
        printf("Indice %d: ",i);
        scanf("%d",&numeros[i]);
    }

    Somando_Array(numeros,soma);
    return 0;
}