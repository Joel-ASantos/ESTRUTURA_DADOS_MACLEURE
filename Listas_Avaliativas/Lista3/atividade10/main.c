#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

int main(int argc,char *argv[]){
    //Imput
    hash_table_put('1','J');
    hash_table_put('2','K');
    hash_table_contains('J');
    
    /*---------------------CONTAIN--------------------*/
    printf("Get: %c",hash_table_get('1'));
    
    /*---------------------CONTAIN--------------------*/
    printf("Contains: %c",hash_table_contains('J'));
    printf("\nContains: %c",hash_table_contains('K'));

    /*---------------------REMOVE--------------------*/
    hash_table_remove('2');

    /*---------------------CONTAIN--------------------*/
    printf("\nContains: %c",hash_table_contains('K'));
    exit(0);
}