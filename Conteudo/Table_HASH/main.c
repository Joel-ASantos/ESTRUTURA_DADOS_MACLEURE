#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table_hash.h"

int main(int argc,char *argv[]){
    
    char** tabela = tabela_hash();

    tabela_hash_put("Abelha","Mel",tabela);
    tabela_hash_put("Bola","Futebol",tabela);
    tabela_hash_put("Bala","Doce",tabela);
    
    printf("Abelhas->%s\n",tabela_hash_get("Abelha",tabela));
    printf("Bola->%s\n",tabela_hash_get("Bola",tabela));
    printf("Bala->%s\n",tabela_hash_get("Bala",tabela));
    printf("Contains(Bala): %d",tabela_hash_contains("Bala",tabela));

    tabela_hash_remove("Bala",tabela);
    printf("\nContains(Bala): %d",tabela_hash_contains("Bala",tabela));
    return 0;
}