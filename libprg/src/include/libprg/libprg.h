#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

typedef struct pilha pilha_t;

 pilha_t* criar_pilha(int capacidade);
 empilhar_a_pilha(pilha_t* p, int valor);
 desempilhar_a_pilha(pilha_t* p);
void tamanho_pilha(pilha_t* p);
void destruir_a_pilha(pilha_t* p);

#endif
