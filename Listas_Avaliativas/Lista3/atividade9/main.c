#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main(int argc, char *argv[]){    
    float read;
    int cont = 0;

    FILE* file = fopen("1kk_rand_float.csv","r");

    if(file == NULL){
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    node* head_H;
    node* head_Hl;

   do{
        fscanf(file,"%.2f",&read);

        if(cont == 0){
            head_H = no(read,NULL);
            head_Hl = no(read,NULL);
            cont++;
        }else{
            lista_inserir_no_ordenado(head_H,no(read,NULL));
        }
   }while(!EOF);
   
    fclose(file);
    Lista_imprimir(head_H);
    printf("\n");
    Lista_imprimir(head_Hl);
   return 0; 
} 