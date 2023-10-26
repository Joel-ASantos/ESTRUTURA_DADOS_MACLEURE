#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

node* no(float valores, node* next){
    node* no =malloc(sizeof(node));
    no->valores = valores;
    no->next = next;
    return no;
}

void lista_inserir_no_ordenado(node* L, node* no){

}