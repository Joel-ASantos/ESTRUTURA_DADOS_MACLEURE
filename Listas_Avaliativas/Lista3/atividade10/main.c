#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

int main(int argc,char *argv[]){
    //Imput
    hash_table_put("Teste1","Valor1");
    hash_table_put("Teste2","Valor2");
    hash_table_contains("Teste1");
    
    /*---------------------GET--------------------*/
    printf("Get: %s",hash_table_get("Teste1"));
    
    /*---------------------CONTAIN--------------------*/
    printf("\nContains: %s",hash_table_contains("Valor1"));
    printf("\nContains: %s",hash_table_contains("Valor2"));

    /*---------------------REMOVE--------------------*/
    hash_table_remove("Teste2");

    /*---------------------CONTAIN--------------------*/
    printf("\nContains: %s",hash_table_contains("Valor1"));
    exit(0);
}