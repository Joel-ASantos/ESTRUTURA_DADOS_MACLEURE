#include <stdio.h>
#include <stdlib.h>
#include "listas.h"


//Definindo os nos das listas ordenadas e nao ordenadas
typedef struct Lista_Nao_Ordenada{
    float valor;
    struct Lista_Nao_Ordenada* proximo;
}Lista_Nao_Ordenada;

typedef struct Lista_Ordenada{
    float valor;
    struct Lista_Ordenada* proximo;
}Lista_Ordenada;

int main(int argc, char *argv[]){
   
   FILE *file = fopen("1kk_rand_float.csv","r");
   
    if(file == NULL){
        perror("\nFalha ao tentar abrir o arquivo\n");
        return -1;
    }
    
   return 0; 
}