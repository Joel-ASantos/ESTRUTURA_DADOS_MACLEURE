#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(int valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void listar_inserir_no(No* H,No* no){
    if(H != NULL){
        if(H->proximo_no == NULL){
            H->proximo_no = no;
        }
        else{
            listar_inserir_no(H->proximo_no,no);
        }
    }
}

void lista_imprimir(No* H){
    if(H != NULL){
        printf("%d\t",H->valor);
        lista_imprimir(H->proximo_no);
    }
}

No* lista_copiar(No* H){
    if(H != NULL){
        return no(H->valor, lista_copiar(H->proximo_no));
    }
    return NULL;
}

void lista_concatenar(No* H, No* Hc){
    listar_inserir_no(H,Hc);
}

void lista_liberar(No* H){
    if(H != NULL){
        lista_liberar(H->proximo_no);
        free(H);
    }
}

int lista_tamanho(No* H){
    if(H != NULL){
        return 1 + lista_tamanho(H->proximo_no);
    }
    return 0;
}

int lista_verificar_existencia(No* H,int valor_buscar){
    if(H != NULL){
        if(valor_buscar == H->valor){
            printf("\nO valor existe no noh");
            return 1;
        }else{
            return lista_verificar_existencia(H->proximo_no,valor_buscar);           
        }
    }
    printf("\nO valor nao existe no noh");
    return 0;
}

int lista_verificar_ocorrencia(No* H,int val_buscar){ //Necessita de Ajustes 
    int ocorrencia;

    if(H != NULL){
        if(ocorrencia != val_buscar){
            return lista_verificar_ocorrencia(H->proximo_no, ocorrencia + 1);
        }
    }
    printf("\nOcorrencia: %d\n",ocorrencia);
    return 0;
}

void lista_imprimir_inversa(No* H){ 
    if(H != NULL){
       lista_imprimir_inversa(H->proximo_no);
       printf("%d\t",H->valor);
    }
}

void lista_inserir_no_i(No* H, int i){

}

void lista_remover_no_i(No* H, int i){

}

void lista_remover_no(No* H, int valor_busca){

}