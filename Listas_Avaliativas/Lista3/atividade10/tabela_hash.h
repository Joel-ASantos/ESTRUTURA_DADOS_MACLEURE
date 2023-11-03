typedef struct Key{
    int key;
    int valor;
}Key;

typedef struct TableHash{
    struct Key* tabela[];
}TableHash;

char* hash_table_get(char* chave);
void hash_table_put(char* chave, char* dado);
int hash_table_contains(char* chave);
void hash_table_remove(char* chave);