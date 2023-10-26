#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"


void lista_ordenada(node* H){
        
}

void lista_nao_ordenada(node* L){

}

int main(int argc, char *argv[]){
    
    //Abrindo arquivo
    FILE* file = fopen("1kk_rand_float.csv","r");

    if(file == NULL){
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    //Declarando as cabeças e caldas
    node* head_H = NULL; //Cabeça da lista ordenada
    node* head_Hl = NULL; //Cabeça da lista não ordenada

    //Estruturando as listas
    lista_ordenada(head_H);
    lista_nao_ordenadar(head_Hl);

   return 0; 
}