#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

char* Hash_Table[TAM];

int hash_code(char* chave){
    int index = 0;

    for(int i = 0; i < TAM; i++){
        index += chave[i];
    }
    return index % TAM;
}

char* hash_table_get(char* chave){
    int id = hash_code(chave);
    return Hash_Table[id];       
}

void hash_table_put(char* chave, char* dado){
    int id = hash_code(dado);

    while(Hash_Table[id] != NULL){
        id = hash_code(id+1) % TAM;
    }
    Hash_Table[id] = dado;
}

int hash_table_contains(char* chave){
    int id = hash_code(chave);

    while(strcmp(chave,Hash_Table[id]) == 0){
        if(id == Hash_Table[id]){
            printf("Contem!");
            return 1;
        }else{
            id = hash_code(id+1) % TAM;
        }
    }
    printf("Nao Contem!");
    return 0;
}

void hash_table_remove(char* chave){
    int id = hash_code(chave);

    while(Hash_Table[id] != NULL){
        if(strcmp(chave,Hash_Table[id]) == 0){
            Hash_Table[id] == NULL;
            printf("Removido!");
        }else{
            id = hash_code(id+1) % TAM;
        }
    }
}