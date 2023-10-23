#include <stdio.h>
#include <stdlib.h>

typedef struct Ponto{
    int x;
    float y;
}Ponto;
int main(int args,char*argv[])
{   
    int x,qtd;
    float y;

    FILE* file;
    file = fopen(argv[1], "r");

    if(file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while(fscanf(file,"%i","%f",&x,&y) != EOF){
        qtd++;
    }
    x=0,y=0;

    fseek(file,0,SEEK_SET);

    struct Ponto *marcas=(struct Ponto *)malloc(qtd * sizeof(struct Ponto));
    
    for(int i=0; i < qtd; i++){
        fscanf(file,"%i","%f",&marcas[i].x,&marcas[i].y);
        while(fgetc(file) != '\n');
    }
    fclose(file);

    for(int i=0;i<qtd;i++){
        x += marcas[i].x;
        y += marcas[i].y;
    }

    float media_X=(float)x / qtd;
    float media_Y= y / qtd;

    float SomatorioX_Y = 0,intercepcao;
    float SomatorioX_X = 0,inclinacao;

    for(int i = 0;i < qtd;i++){
        SomatorioX_Y += (marcas[i].x - media_X) * (marcas[i].y - media_Y);
        SomatorioX_X += (marcas[i].x - media_X) * (marcas[i].x - media_X);
    }
    inclinacao = SomatorioX_Y/SomatorioX_X;
    intercepcao = media_Y - inclinacao * media_X;
    
    printf("Quantidade dos registros: %i",qtd);
    printf("Media de X: %.1f , Media de Y = %.1f\n",media_X,media_Y);
    printf("Inclinacao: %.1f\n",inclinacao);
    printf("Intercepcap: %.1f",intercepcao);
    printf("Resultado = Y: %.1f * X + %.1f\n",inclinacao,intercepcao);

    free(marcas);   
    return 0;
}