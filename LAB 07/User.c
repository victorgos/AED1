#include <stdio.h>
#include <stdlib.h>
#include "Lista_dinamica_ordenada.h"

int main(){
    Lista l;
    int x,y;
    while(x!=5){
    printf("Escolha uma das opcoes a seguir: \n1- Cria lista\n2- Inserir elemento na lista\n3- Remover elemento da lista\n4- Imprimir a lista\n5- Sair\n");
    scanf("%d",&x);
    switch(x){
        case 1:
            l = cria_lista();
            break;
        case 2:
            printf("Digite o elemento a ser inserido na lista: ");
            scanf("%d",&y);
            insere_ord(&l,y);
            break;
        case 3:
            printf("Digite o elemento a ser removido na lista: ");
            scanf("%d",&y);
            remove_ord(&l,y);
            break;
        case 4:
            imprime_lista(l);
            break;
        case 5: break;
        default:
            printf("Opcao invalida!");
    }
    }
return 0;
}
