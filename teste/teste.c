#include <stdio.h>

double calcular_dobro(double n){
	return n*2;
}

int main(int argc, char* argv[]){
    int n =11;
    int n2=0;
    float f1=1.5;
    double d1=1.55555555;
    char letra='j';
    
    if(n2){
    	printf("0 eh verdadeiro\n");
	}if(n){
		printf("11 eh verdadeiro");
	}
	printf("\n");
	for(n=0;n<10;n++){
		printf("%d",n);
	}
	
	printf("\nO Dobro de %lf eh %lf", d1, calcular_dobro(n));
    return 0;
}
