#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(int argc, char *argv[]){
    
    struct Objeto o1;
    Objeto o1;
    o1.valor = 'A';

    struct Objeto o2;
    Objeto o2;
    o1.valor = 'B';

    struct Objeto o3;
    Objeto o3;
    o1.valor = 'C';

    struct File* ptr_F = fila();

    
    enfileirar(&o1,ptr_F);
    enfileirar(&o2,ptr_F);
    enfileirar(&o3,ptr_F);
    
    struct Objeto* ptr_o;

    do{
        ptr_o = desenfileirar(ptr_F);
        if(ptr_o != NULL){
            printf("%c\n",ptr_o->valor);
        }
    }while(ptr_o != NULL);
    return 0;
}