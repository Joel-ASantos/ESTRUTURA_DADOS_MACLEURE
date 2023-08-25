#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 Verificar se um elemento existe no array 
 Escreva uma função que recebe um array de strings e uma string de busca,
 e retorna "1" se a string de busca existe no array, ou "0" caso não exista.
*/


int EncontrarStrings(const char *vetor[],const char *busca,int tamanho){
    for(int i =0;i < tamanho;i++){
        if(strcmp(vetor[i],busca)==0){
            return 1;
        }else{
            return 0;
        }
    }
}
int main(int args, char* argv[]){
    const char *palavra[] = {"dia", "noite", "sabado" , "domingo"};
    int ArrayLenght = sizeof(palavra)/sizeof(palavra[0]);
    const char *pesquisa;
    char mec;
    int out;

    printf("Digite a palavra a ser pesquisada: ");
    scanf("%s",&mec);

    pesquisa = &mec;
    
    out = EncontrarStrings(palavra,pesquisa,ArrayLenght);
    
    if(out == 1){ 
        printf("\nSaida: %d",out);
    }else{
        printf("\nSaida: %d",out);
    }
    return 0;
}