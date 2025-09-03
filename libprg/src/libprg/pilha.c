
#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int* elementos;
    int topo;
    int capacidade;
} pilha_t;


    pilha_t* criar_pilha(int capacidade) {
        pilha_t* p = malloc(sizeof(pilha_t));

        p->elementos = malloc(capacidade * sizeof(int));

        p->topo = -1;

        p->capacidade = capacidade;

        return p;

    }

  int empilhar_a_pilha(pilha_t* p, int valor) {
        if (p->topo == p->capacidade - 1) {  // Se o conteudo do valor de topo for igual a capacidade -1
            printf("\n A Pilha esta cheia!!!!\n"); //
            return 0;
        }
        p->elementos[++p->topo] = valor; /* ocorre primeiro um incremento de topo,
                                            depois salva o elemento do vetor na variavel valor */
            return 1;

    }
    int desempilhar_a_pilha(pilha_t* p) {
        if (p-> topo == -1) {  // Se o valor do campo da estruct eh igual a -1
            printf("\n A pilha esta vazia!!!! \n");

        }
        return p->elementos[p->topo--];


    }

    void tamanho_pilha(pilha_t* p) {
        if (p-> topo == -1) {
            printf("\n A pilha esta vazia!!!! \n");
        } else {
            printf("\n tamanho da pilha eh %d", p->topo +1);
        }


    }



    void destruir_a_pilha(pilha_t* p) {   // nao preciso de retorno, por isso um void
        free(p->elementos); // liberei a memoria alocada do vetor elementos
        free(p);               // liberei a memoria alocada do ponteiro p


    }







/*
    desempilhar
    tamanho
    vazia
    destruir
    */








