
#include <stdbool.h>
#include <stdlib.h>

typedef struct fila_t {
    int* elementos;
    int inicio;
    int tamanho;
    int fim;
    int capacidade;
} fila_t;

fila_t* criar_fila(int capacidade) {
   fila_t* f = malloc(sizeof(fila_t));

    f->elementos = malloc(capacidade*sizeof(int));

    f-> inicio = 0;
    f-> fim = 0;
    f->capacidade = 0;
    f-> capacidade = capacidade;

    return f;

}

bool cheia(fila_t* fila) {
    return fila->tamanho  >= fila->capacidade; {

    }

}

 void enfileirar(fila_t* fila, int valor) {

    if (cheia(fila)) {

        exit(EXIT_FAILURE);
    }
    fila->elementos[fila->fim] = valor;
    fila->fim++;
    fila->tamanho++;



}







// // criar_fila
// enfileirar
// desenfileirar
// inicio
// fim
// tamanho
// destruir_fila