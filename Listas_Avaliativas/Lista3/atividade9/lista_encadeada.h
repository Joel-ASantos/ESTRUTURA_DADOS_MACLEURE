typedef struct node{
    float valores;
    struct node* next;
}node;

void lista_inserir_no_ordenado(node* L, node* no);
void Lista_imprimir(node* H);