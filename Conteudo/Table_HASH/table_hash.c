#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "table_hash.h"

int hash(char* chave){
    return (toupper(chave[0])-65)*TAM_ALFABETO + (toupper(chave[1])-65);
}

char** tabela_hash(){
    char** tabela = malloc(sizeof(char*)*TAM_TABELA);

    for(int i = 0; i < TAM_TABELA; i++){
        tabela[i] = malloc(sizeof(char)*TAM_VALOR);
        strcpy(tabela[i],"");
    }
    return tabela;
}

void tabela_hash_put(char* chave,char* valor, char** tabela){
   strcpy(tabela[hash(chave)], valor);
}

char* tabela_hash_get(char* chave,char **tabela){
    return tabela[hash(chave)];
}

int tabela_hash_contains(char* chave,char** tabela){
    int tam_valor = strlen(tabela[hash(chave)]);

    if(tam_valor > 0){
        return 1;
    }
    return 0;
}

int tabela_hash_remove(char* chave,char** tabela){
    strcpy(tabela[hash(chave)], "");
}