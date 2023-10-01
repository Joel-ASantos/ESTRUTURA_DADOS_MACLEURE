struct Objeto{
    char valor;
    struct Objeto* objeto_anterior;
};
struct Fila{
    struct Objeto* inicio;
    struct Objeto* final;
    int quantidade_objetos;
};
struct Fila* fila();
void enfileirar(struct Objeto* o,struct Fila* ptr_F);
struct Objeto* desenfileirar(struct Fila* ptr_F);