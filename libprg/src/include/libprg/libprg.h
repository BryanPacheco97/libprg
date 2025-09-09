#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

typedef struct pilha pilha_t;

 pilha_t* criar_pilha(int capacidade);
int empilhar_a_pilha(pilha_t* p, int valor);
 int desempilhar_a_pilha(pilha_t* p);
 int tamanho_pilha(pilha_t* p);
 void imprime_topo_pilha(pilha_t* p);
void destruir_a_pilha(pilha_t* p);

#endif
