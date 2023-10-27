#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
        if(fscanf(file,"%.2f",&read) == 1){

            if(cont == 0){
                head_H = no(read,NULL);
                head_Hl = no(read,NULL);
                cont++;
            }else{
                lista_inserir_no_ordenado(head_H,no(read,NULL));
            }
        }
   }while(!feof(file));
   
    fclose(file);
    
    Lista_imprimir(head_H);
    printf("\n");
    Lista_imprimir(head_Hl);

    clock_t start, end;
    double cpu_time_used;
    
    start = clock();

    printf("\n\nTempo de inicio: %f\n", ((double)start) / CLOCKS_PER_SEC);
    
    for (int i = 100000; i >= 1; i--) {
        node* novo_no = no(i * 1.0, NULL);
        lista_inserir_no_ordenado(head_Hl, novo_no);
    }

    end = clock();
    
    printf("Tempo de fim: %f\n", ((double)end) / CLOCKS_PER_SEC);
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tempo medio de insercao na lista ordenada: %f segundos\n", cpu_time_used);

    start = clock();

    for (int i = 100000; i >= 1; i--) {
        node* novo_no = no(i * 1.0, NULL);
        lista_inserir_no_ordenado(head_H, novo_no);
    }
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tempo medio de insercao na lista ordenada: %f segundos\n", cpu_time_used);

    lista_liberar(head_Hl);
    head_Hl = NULL;
    lista_liberar(head_H);
    head_H = NULL;
   return 0; 
} 