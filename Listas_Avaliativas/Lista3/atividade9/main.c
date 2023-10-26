#include <stdio.h>
#include <stdlib.h>
#include "listas.h"


//Definindo os nos das listas ordenadas e nao ordenadas
typedef struct node{
    float valores;
    struct node* next;
}node;

int main(int argc, char *argv[]){
    
    //Abrindo arquivo
    FILE* file = fopen("1kk_rand_float.csv","r");

    if(file == NULL){
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    //Declarando as cabeças e caldas
    node* head_H = NULL;
    node* tail_H = NULL;
    node* head_Hl = NULL;
    node* tail_Hl = NULL;
    
   return 0; 
}