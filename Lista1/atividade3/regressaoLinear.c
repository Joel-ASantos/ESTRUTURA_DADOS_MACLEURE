#include <stdio.h>
#include <stdlib.h>

typedef struct Ponto{
    int x, qtd;
    float y;
};
int main(int args,char*argv[])
{   
    //Open Fie
    FILE* file;
    file = fopen(argv[1], "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    

    return 0;
}