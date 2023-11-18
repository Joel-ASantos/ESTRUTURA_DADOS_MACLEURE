typedef struct No{
    int valor;
    struct No* no_direita;
    struct No* no_esquerda;
}No;

void ab_inserir_no(No** raiz,int valor);
void ab_imprimir_em_ordem(No* raiz);