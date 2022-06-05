#include <stdio.h>
#include "Pontos.h"

int main() {
    pontos *p;
    int i,x;
    double distancia;
    p = generate();
    double dista[4];

    for (i = 0; i < 4 ; ++i) {
        printf("Entre com D%d: ",i+1);
        scanf("%lf",&dista[i]);
    }

    x = set_pto(p,dista[0],dista[1],dista[2],dista[3]);
    if(x) {
        printf("Pontos gravados com sucesso!\n");
    } else {
        printf("Erro!\n");
        return -1;
    }

    distancia = distancia_pto(p);
    printf("distancia -> %2.lf",distancia);
    freeP(p);

    return 0;
}
