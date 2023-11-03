#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"
#define TAM 17

typedef struct Key{
    char key;
    char valor;
}Key;

typedef struct Table_Hash{
    struct Key* tabela[TAM];
}TableHash;

int main(int argc,char *argv[]){
    
    exit(0);
}