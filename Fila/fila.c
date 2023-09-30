#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct Fila* fila(){
    struct Fila* ptr_F=(struct Fila*) malloc(sizeof(struct Fila));
    ptr_F->inicio = NULL;
    ptr_F->final = NULL;
    ptr_F->quantidade_objeto = 0;
    return ptr_F;
}

void enfileirar(struct Objeto* ptr_o,struct Fila* ptr_F){
    if(ptr_F->inicio == NULL){
        ptr_F->inicio = ptr_o;
        ptr_F->final = ptr_o;
        ptr_o->objeto_anterior = NULL;
    }else{
        ptr_F->final->objeto_anterior = ptr_o;
        ptr_F->final = ptr_o;
    }
    ptr_F->quantidade_objeto++;   
}

struct Objeto* desenfileirar(struct Fila* ptr_F){
    if(ptr_F->quantidade_objeto == 0){
        return NULL;
    }
    struct Objeto* ptr_o = ptr_F->inicio;
    ptr_F->inicio = ptr_o->objeto_anterior;
    ptr_F->quantidade_objeto--;
    return ptr_o;
}