
#include <stdbool.h>
#include <stdlib.h>

typedef struct fila_t{
    int* elementos;
    int inicio;
    int tamanho;
    int fim;
    int capacidade;
} fila_t;

fila_t* criar_fila(int capacidade){
    fila_t* f = malloc(sizeof(fila_t));

    f->elementos = malloc(capacidade*sizeof(int));

    f-> inicio = 0;
    f-> fim = -1;
    f->tamanho = 0;
    f->capacidade = capacidade;

    return f;

}

bool cheia(fila_t* f) {
    return f->tamanho  <= f->capacidade;{

    }

}


void enfileirar(fila_t* f, int valor) {
    if (f->tamanho == f->capacidade) {
        return; // fila cheia, não insere
    }

    f->fim = (f->fim + 1) % f->capacidade;
    f->elementos[f->fim] = valor;
    f->tamanho++;
}


}

bool vazia(fila_t* f){
    return f->tamanho  == 0;


}

int tamanho_fila(fila_t* f ){
    return f->fim; // retorna o indice fim da fila para saber qual eh o tamanho



}


void desenfileirar(fila_t* f) {
    if (vazia(f)) {
        exit(EXIT_FAILURE); // fila vazia, não há o que remover
    }

    f->inicio = (f->inicio + 1) % f->capacidade; // move o início corretamente com a logide de fila circular
    f->tamanho--;  // diminui o número de elementos

}


int* elementos_da_fila(fila_t* f) { // retorna o ponteiro para o vetor original.
    return f->elementos;  // Nao necessitando de fazer uma copia, descobri que eh uma pratica perigosa ;)
}




void destruir_fila(fila_t* f){
    free(f->elementos);
    free(f);


}







// // criar_fila
// enfileirar
// desenfileirar
// inicio
// fim
// tamanho
// destruir_fila
