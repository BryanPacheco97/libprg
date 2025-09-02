
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

  // int pilha_vazia(struct pilha ) {


      //  }





  /  }
/*    empilhar
    desempilhar
    tamanho
    vazia
    destruir
    */








