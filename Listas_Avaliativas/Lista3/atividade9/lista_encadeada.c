#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_encadeada.h"

node* no(float valores, node* next){
    node* no =malloc(sizeof(node));
    no->valores = valores;
    no->next = next;
    return no;
}

void lista_inserir_no_ordenado(node* L, node* no){
    node* new_node;

    if(L != NULL){
        if(L->next == NULL){
            new_node = L->next;
            L = new_node;
        }else{
            new_node = L;

            while(new_node->next != NULL && new_node->next->valores < no->valores){
                new_node = new_node->next;
            }
            no->next = new_node->next;
            new_node->next = no;
        }
    }
}

void Lista_imprimir(node* H){
    if(H != NULL){
        printf("%.2f\n",H->valores);
        Lista_imprimir(H->next);
    }
}

void lista_liberar(node* L){
    if (L != NULL) {
        lista_liberar(L->next);
        free(L);
    }
}