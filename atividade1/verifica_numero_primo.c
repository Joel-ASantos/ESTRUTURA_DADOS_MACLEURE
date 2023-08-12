#include <stdio.h>

int verificarNumeroPrimo(int n){
    if(n < 2){
        printf("Ele nao eh primo");
    }else{
        //Ciclo for não finalizado
        for(;;){

        }
    }
}

int main(int argc,char*argv[]){
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    printf(verificarNumeroPrimo(numero));
    return 0;
}