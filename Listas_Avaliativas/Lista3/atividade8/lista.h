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

//Funções Adicionadas
int lista_verificar_existencia(No* H,int valor_buscar);
int lista_verificar_ocorrencia(No* H,int qtd);
void lista_imprimir_inversa(No* H);

//Funções que faltam Adicionar
void lista_inserir_no_i(No* H, int i);
void lista_remover_no_i(No* H, int i);
void lista_remover_no(No* H, int valor_busca);