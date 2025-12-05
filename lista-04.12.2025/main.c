#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    char valor;
    struct elemento *proximo;
    struct elemento *anterior;
} Elemento;

typedef struct lista {
    Elemento *inicio;
    Elemento *elemento_corrente;
    int posicao_corrente;
    int tamanho;
} Lista;

Lista* iniciar();
void add(Lista *l, char caractere);
int empty(Lista *l);
void add_pos(Lista *l, char caractere, int posicao);
char get(Lista *l, int posicao);
void set(Lista *l, char caractere, int posicao);
char delete(Lista *l, int posicao);
int size(Lista *l);
void exibir(Lista *l);

Lista* iniciar() {
    Lista *l = malloc(sizeof(Lista));
    l->inicio = NULL;
    l->elemento_corrente = NULL;
    l->tamanho = 0;
    l->posicao_corrente = 0;
    return l;
}

int main() {

    Lista *lista = iniciar();

    add(lista, 'X');
    add(lista, 'Y');
    add(lista, 'Z');

    exibir(lista);

    add_pos(lista, 'X', 2);
    exibir(lista);

    printf("get(3) = %c\n", get(lista, 3));

    delete(lista, 1);
    exibir(lista);

    return 0;
}

int empty(Lista *l) {
    return l->tamanho == 0;
}

void add(Lista *l, char caractere) {

    Elemento *e = malloc(sizeof(Elemento));
    e->valor = caractere;
    e->anterior = NULL;
    e->proximo = l->inicio;

    if (!empty(l)) {
        l->inicio->anterior = e;
    }

    l->inicio = e;
    l->tamanho++;

    l->elemento_corrente = NULL;
}

void add_pos(Lista *l, char caractere, int posicao) {

    if (posicao < 1 || posicao > l->tamanho + 1) {
        printf("Posição inválida!\n");
        return;
    }

    if (posicao == 1) {
        add(l, caractere);
        return;
    }

    Elemento *atual = l->inicio;

    for (int i = 1; i < posicao - 1; i++) {
        atual = atual->proximo;
    }

    Elemento *novo = malloc(sizeof(Elemento));
    novo->valor = caractere;
    novo->anterior = atual;
    novo->proximo = atual->proximo;

    if (atual->proximo != NULL) {
        atual->proximo->anterior = novo;
    }

    atual->proximo = novo;

    l->tamanho++;
    l->elemento_corrente = NULL;
}

char get(Lista *l, int posicao) {

    if (empty(l)) {
        printf("Lista vazia.\n");
        return '\0';
    }

    if (posicao < 1 || posicao > l->tamanho) {
        printf("Posição inválida!\n");
        return '\0';
    }

    if (l->elemento_corrente == NULL) {
        l->elemento_corrente = l->inicio;
        l->posicao_corrente = 1;
    }

    Elemento *e = l->elemento_corrente;
    int i = l->posicao_corrente;

    while (i < posicao) {
        e = e->proximo;
        i++;
    }

    while (i > posicao) {
        e = e->anterior;
        i--;
    }

    l->elemento_corrente = e;
    l->posicao_corrente = posicao;

    return e->valor;
}

void set(Lista *l, char caractere, int posicao) {

    if (empty(l)) {
        printf("Lista vazia.\n");
        return;
    }

    if (posicao < 1 || posicao > l->tamanho) {
        printf("Posição inválida!\n");
        return;
    }

    char dummy = get(l, posicao);
    (void)dummy;

    l->elemento_corrente->valor = caractere;
}

char delete(Lista *l, int posicao) {

    if (empty(l)) {
        printf("Lista vazia. Delete não permitido!\n");
        return '\0';
    }

    if (posicao < 1 || posicao > l->tamanho) {
        printf("Posição inválida!\n");
        return '\0';
    }

    Elemento *e = l->inicio;

    if (posicao == 1) {

        char val = e->valor;
        l->inicio = e->proximo;

        if (l->inicio != NULL)
            l->inicio->anterior = NULL;

        if (l->elemento_corrente == e) {
            l->elemento_corrente = NULL;
            l->posicao_corrente = 0;
        }

        free(e);
        l->tamanho--;
        return val;
    }

    for (int i = 1; i < posicao; i++) {
        e = e->proximo;
    }

    char val = e->valor;

    if (e->anterior != NULL)
        e->anterior->proximo = e->proximo;

    if (e->proximo != NULL)
        e->proximo->anterior = e->anterior;

    if (l->elemento_corrente == e) {
        l->elemento_corrente = NULL;
        l->posicao_corrente = 0;
    }

    free(e);
    l->tamanho--;
    return val;
}

int size(Lista *l) {
    return l->tamanho;
}

void exibir(Lista *l) {
    if (empty(l)) {
        printf("Lista vazia!\n");
        return;
    }

    Elemento *e = l->inicio;
    printf("Lista:\n");

    while (e != NULL) {
        printf(" %c ", e->valor);
        e = e->proximo;
    }

    printf("\n");
}