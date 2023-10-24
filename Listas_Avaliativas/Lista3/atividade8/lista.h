typedef struct No{
    int valor;
    struct No* proximo_no;
}No;

No* no(int valor, No* proximo_no);
void listar_inserir_no(No* H,No* no);
void lista_imprimir(No* H);
No* lista_copiar(No* H);
void lista_concatenar(No* H, No* Hc);
void lista_liberar(No* H);
int lista_tamanho(No* H);
int lista_verificar_existencia(No* H,int valor_buscar);
int lista_verificar_ocorrencia(No* H,int qtd);
void lista_imprimir_inversa(No* H);