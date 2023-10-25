typedef struct No{
    float valores;
    struct No* proximo;
}No;

void lista_inserir_no_ordenado(No* L, No* no);