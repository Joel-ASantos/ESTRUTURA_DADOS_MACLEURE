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

    while(Hash_Table[id] != '\0'){
        id = hash_code(id+1);
    }
    Hash_Table[id] = dado;
}

int hash_table_contains(char* chave){
    int id = hash_code(chave);

    while(Hash_Table[id] != '\0'){
        if(id == Hash_Table[id]){
            printf("Contem!");
            return Hash_Table[id];
        }else{
            id = hash_code(id+1);
        }
    }
    printf("Nao Contem!");
    return NULL;
}

void hash_table_remove(char* chave){
    int id = hash_code(chave);

    while(Hash_Table[id] != '\0'){
        if(id == Hash_Table[id]){
            Hash_Table[id] == NULL;
            printf("Removido!");
            free(id);
        }else{
            id = hash_code(id+1);
        }
    }
}