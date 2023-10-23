#include<string.h>
#include"bubble_sort.h"
#define MAX 100

void organizar(char *palavra1,char *palavra2){
    char aux[MAX];

    strcpy(aux,palavra1);
    strcpy(palavra1,palavra2);
    strcpy(palavra2,aux);
}
void bubble_sort(char array[][MAX],int ctd){
    for(int i = 0; i < ctd - 1; i++){
        for(int j = 0; j < ctd - i - 1;j++){
            if(strcmp(array[j],array[j+1]) > 0){
                organizar(array[j],array[j+1]);
            }
        }
    }
}