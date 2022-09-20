#include <stdio.h>
#include <stdlib.h>

typedef struct tipoPessoa {
    char nome[40];
    float altura;
} tipoPessoa;

typedef struct tipoNo {
    tipoPessoa d;
    struct tipoNo *prox;
} tipoNo;

typedef struct tipoPilha {
    tipoNo * topo;
} tipoPilha;

void criaPilha(tipoPilha *l) {
    l->topo = NULL;
}

void insereNaPilha(tipoPilha *l, tipoPessoa valor) {
    tipoNo *aux;

    aux = (tipoNo *) malloc(sizeof(tipoNo));
    aux->d = valor;
    aux->prox = l->topo;
    l->topo = aux;
}

void mostraPilha(tipoPilha *l) {
    tipoNo *aux;

    aux = l->topo;
    while(aux !=NULL) {
        printf("%s \n", aux->d.nome);
        printf("%.2f \n", aux->d.altura);
        aux = aux->prox;
    }
}

tipoPessoa removeDaPilha(tipoPilha *l) {
    tipoPessoa tmp;
    tipoNo *aux;

    aux = l->topo;
    tmp = aux->d;
    l->topo = aux->prox;
    free(aux);
    return tmp;
}

int main() {
    tipoPilha l1, l2;
    int x;
    tipoPessoa tmp;

    criaPilha(&l1);

    for(x = 0; x<3; x++) {
        printf("Entre com o nome da pessoa: ");
        scanf("%[^\n]%*c", tmp.nome);
        printf("Entre com a altura: ");
        scanf("%f%*c", &tmp.altura);
        insereNaPilha(&l1, tmp);
    }

    mostraPilha(&l1);

    tmp = removeDaPilha(&l1);

    printf("Elemento removido da pilha: %s\n", tmp.nome);

    printf("Como ficou a fila depois disso:\n");
    mostraPilha(&l1);
}