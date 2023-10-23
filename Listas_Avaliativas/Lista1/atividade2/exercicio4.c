#include <stdio.h>
#include <stdlib.h>

/*
    Contar a quantidade de ocorrências de um elemento no array. 
    Escreva uma função que recebe um array de números inteiros e um número inteiro de busca, 
    e retorna a quantidade de vezes que o número de busca aparece no array.
*/
void Contando_Elementos(int numeros[],int busca,int tamanho){
    int cont=0,i;

    for(i = 0;i < tamanho;i++){
        if(busca == numeros[i]){
            cont++;
        }
    }
    printf("O numero que se busca aparece: %d",cont);
}
int main(int args, char *argv[]){
    int array[]={1,4,5,5,5,5,7,8};
    int tamanho= sizeof(array)/sizeof(array[0]);
    int pesquisa;

    printf("Digite o numero para ser pesquisado: ");
    scanf("%d",&pesquisa);

    Contando_Elementos(array,pesquisa,tamanho);
    return 0;
}