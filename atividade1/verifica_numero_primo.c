#include <stdio.h>
#include <math.h>

int verificarNumeroPrimo(int n)
{   
    if(n % 2 == 0){
        return 0;
    }

    for(int i = 2; i <= sqrt(n);i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(int argc,char*argv[])
{
    int numero;

    printf("Digite o numero: ");
    scanf("%d",&numero);

    if(verificarNumeroPrimo(numero)>=1){
        printf("eh primo");
    }else if(verificarNumeroPrimo(numero)<1){
        printf("nao eh primo");
    }
    return 0;
}