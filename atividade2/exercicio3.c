#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 Verificar se um elemento existe no array 
 Escreva uma função que recebe um array de strings e uma string de busca,
 e retorna "1" se a string de busca existe no array, ou "0" caso não exista.
*/

int EncontrarString(const char *vetor[],const char *busca,int lenght){
    int valor=0,i;
  
    for(i = 0;i < lenght;i++){
        if(strcmp(vetor[i],busca) == 0){  
            valor++;
            printf("Saida: %d",valor);    
            return 1;  
        }
    }
    printf("Saida: %d",valor);
    
    return 0;
}
int main(int args, char *argv[]){
    const char *palavra[] = {"triste","feliz","dia"};
    const char *pesquisa="noite";
    int tam = sizeof(palavra)/sizeof(palavra[0]);
  
    EncontrarString(palavra,pesquisa,tam);   
    return 0;
}