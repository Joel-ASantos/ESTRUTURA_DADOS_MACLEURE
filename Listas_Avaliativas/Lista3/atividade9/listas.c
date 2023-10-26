#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

No* no(float valores,No* proximo){
    No* no =malloc(sizeof(No));
    no->valores = valores;
    no->proximo = proximo;
    return no;
}

void lista_inserir_no_ordenado(No* L, No* no){ //Função que deve inserir mais um nó na Lista ordenada no main.
   
}