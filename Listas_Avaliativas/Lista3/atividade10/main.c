#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

int main(int argc,char *argv[]){
    
    hash_table_put("Teste1","Valor1");
    hash_table_put("Teste2","Valor2");
    hash_table_contains("Teste1");
    
    printf("Get: %s",hash_table_get("Teste1"));
    
    printf("\nContains: %s",hash_table_contains("Valor1"));
    printf("\nContains: %s",hash_table_contains("Valor2"));

    hash_table_remove("Teste2");
    
    printf("\nContains: %s",hash_table_contains("Valor1"));

    /*----------------------ArrayIndex---------------------------*/
    int in = hash_code("Teste1");
    hash_table_put("Teste1","Valor1");

    printf("Hash: %s",in);

    exit(0);
}