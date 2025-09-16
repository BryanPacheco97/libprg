
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
    f-> fim = 0;
    f->tamanho = 0;
    f->capacidade = capacidade;

    return f;

}

bool cheia(fila_t* f) {
    return f->tamanho  <= f->capacidade;{

    }

}

void enfileirar(fila_t* f, int valor){

    if (cheia(f)){

        exit(EXIT_FAILURE);
    }

    f->elementos[f->fim] = valor;
    f->fim++;
    f->tamanho++;


}


}

bool vazia(fila_t* f){
    return f->tamanho  >= 0;


}


int exibir_fila_atual(fila_t* f,int* fila_atual) {
        *fila_atual = f->tamanho;
        return f->elementos;

    }





}



int desenfileirar(fila_t* f){

    if (vazia(f)) {

        exit(EXIT_FAILURE);
    }
      int valor = f->elementos[f->inicio];
      f->inicio++;
      f->tamanho--;
      return valor;




void exibir_fila(fila_t* f) {
    if (vazia(f)) {
        printf("A fila esta vazia!!!!!\n");
        return;
    }

    printf("Fila atual: ");
    for (int i = f->inicio; i < f->fim; i++) {
        printf("%d ", f->elementos[i]);
    }
    printf("\n");
}




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
