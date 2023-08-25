#include <stdio.h>
#include <stdlib.h>

/*
Multiplicar elementos de dois arrays. 
Escreva uma função que recebe dois arrays de números inteiros com o mesmo tamanho 
e retorna um novo array com os elementos resultantes da multiplicação
 dos elementos dos dois arrays.
*/

void Multiplicando_Arrays(int vetor1[],int vetor2[],int vetor3[]){
    for(int i = 0; i < 4;i++){
        vetor3[i] = vetor1[i]*vetor2[i];
    }
    
    for(int i = 0; i < 4;i++){
        printf("Saida %d: %d\n",i,vetor3[i]);
    }
}
int main(int args, char *argv[]){

    int array1[] ={5,3,4,2};
    int array2[] ={4,8,9,6};
    int array3[4];

    Multiplicando_Arrays(array1,array2,array3);
    return 0;
}
