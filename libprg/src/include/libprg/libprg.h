#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
/* ---- PILHA--- */
typedef struct pilha pilha_t;

 pilha_t* criar_pilha(int capacidade);
int empilhar_a_pilha(pilha_t* p, int valor);
 int desempilhar_a_pilha(pilha_t* p);
 int tamanho_pilha(pilha_t* p);
 int imprime_topo_pilha(pilha_t* p);
void destruir_a_pilha(pilha_t* p);

/* ---- FILA--- */
typedef struct fila fila_t;
fila_t* criar_fila(int capacidade);
void enfileirar(fila_t* fila, int valor);
bool cheia(fila_t fila);

#endif
