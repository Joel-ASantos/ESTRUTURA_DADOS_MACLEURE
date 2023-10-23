#include <stdio.h>

/*
Maior e menor elemento do array. 
Escreva uma função que recebe um array de números inteiros e retorna o 
menor e o maior elemento do array
*/

void encontrarElementos_array(int array[]){
    int max = 0,min;

    for(int i = 0;i < 5;i++){
        if(array[i] > max){
            max = array[i];
        }

        if(array[i] < min){
            min = array[i];
        }
    }

    printf("\nO valor maximo eh: %d",max);
    printf("\nO valor minimo eh: %d",min);
}
int main(int args, char* argv[]){
    int numeros[5];

    for(int i = 0; i < 5; i++){
        printf("Indice %d: ",i);
        scanf("%d",&numeros[i]);
    }

    encontrarElementos_array(numeros);
    return 0;
}