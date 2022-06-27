#include <stdio.h>
#include <stdlib.h>
#include "Lista_dinamica_ordenada.h"
struct no{
    int info;
    struct no *prox;
};

Lista cria_lista(){
    Lista cab;
    cab = (Lista)malloc(sizeof(struct no));
    if(cab!=NULL){
        cab->prox = NULL;
        cab->info = 0;
    }
    return cab;
}

int lista_vazia(Lista lst){
    if(lst==NULL){
        return 1;
    }else{
        return 0;
    }
}

int insere_ord(Lista *lst, int elem){
    Lista N = (Lista) malloc(sizeof(struct no));
    if(N==NULL){
        return 0;
    }
    N->info = elem;
    Lista aux = *lst;
    while(aux->prox!=NULL&&aux->prox->info<elem){
        aux = aux->prox;
    }
    N->prox = aux->prox;
    aux->prox = N;
    (*lst)->info++;
    return 1;
}

int remove_ord(Lista *lst, int elem){
    if(lista_vazia(*lst)){
        return 0;
    }
    Lista aux = *lst;
    while (aux->prox!=NULL&&aux->prox->info<elem){
        aux = aux->prox;
    }
    if(aux->prox==NULL||aux->prox->info>elem){
        return 0;
    }
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    (*lst)->info--;
    return 1;
}

void imprime_lista(Lista lst){
    Lista aux;
    aux = lst->prox;
    printf("{ ");
    while(aux!=NULL){
        printf("%d ",aux->info);
        aux = aux->prox;
    }
    printf("}\n");
}
