#include <stdio.h>
#include <stdlib.h>
#include "Binary_tree.h"

int main(int argc,char* argv[]){
    No* raiz = NULL;
    ab_inserir_no(&raiz,2); //Colocar & na raiz
    ab_inserir_no(&raiz,3);
    ab_inserir_no(&raiz,5);
    ab_inserir_no(&raiz,10);
    ab_inserir_no(&raiz,9);
    ab_inserir_no(&raiz,6);
    ab_inserir_no(&raiz,1);

    ab_imprimir_em_ordem(raiz);
    return 0;
}