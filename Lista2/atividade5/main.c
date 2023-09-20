#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

/*
No seu repositório de atividades, crie uma pasta chamada atividade5 que contenha os arquivos main.c bubble_sort.h e bubble_sort.c;

O seu programa deve implementar o algoritmo bubble sort para ordenar um arquivo de palavras passados
na chamada do programa e criar um arquivo com as palavras ordenadas como saída.
Exemplo:
./main arq_palavras.txt
Saída: arq_palavras_ordenado.txt

arq_palavras.txt
hoje
amanha
depois

arq_palavras_ordenado.txt
amanha
depois
hoje

OBS: o nome do arquivo é passado como argumento na chamada do programa (argv);*/

int main(int argc, char *argv[]){
    
    //Arquivo para escrever
    char String[MAX];
    int cont = 0;

    FILE *file;
    file = fopen(argv[1],"w");

    if(file == NULL){
        printf("Erro! Arquivo nao encontrado.");
        return 1;
    }

    while(fscanf(file,"%s",&String[MAX]) != EOF){
        cont++;
    }
    fclose(file);

    /**
     * @brief Atividade 5(Lista 2): Estrutura de dados
     * 
     * Status: Incompleto;
     * O que falta?
     * 
     * Falta o algoritmo bubble sort,
     * a saida .txt, e a leitura.
     */
    return 0;
}