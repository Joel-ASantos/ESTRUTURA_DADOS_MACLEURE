#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc,char *argv[]){
    
    No* n0 = no(12,NULL);
    No* n1 = no(23,NULL);
    No* n2 = no(5,NULL);

    listar_inserir_no(n0,n1);
    listar_inserir_no(n0,n2);

    No* Ncopia = lista_copiar(n0);

    lista_imprimir(n0);
    printf("\n");
    lista_imprimir(Ncopia);

    lista_concatenar(n0,Ncopia);
    printf("\n");
    lista_imprimir(n0);

    lista_verificar_existencia(n0,23);
    printf("\n");

    printf("\nQtd. de ocorrencias: %d",lista_verificar_ocorrencia(n0,0));
    printf("\n");

    printf("\nQtd. nos: %d",lista_tamanho(n0));
    lista_liberar(n0);
    return 0;
}