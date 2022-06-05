#include <stdio.h>
#include <stdlib.h>
#include "Pontos.h"
#include <math.h>

struct pontos{
    int x1;
    int y1;
    int x2;
    int y2;
};

struct pontos* generate() {
pontos *p;
p = (pontos *) malloc(sizeof(pontos));
return p; }

int set_pto(pontos *p, int X1, int X2, int Y1, int Y2) {
    if(p==NULL){
        return 0;
    }else{
    p->x1 = X1;
    p->y1 = Y1;
    p->x2 = X2;
    p->y2 = Y2;
    return 1;
    }
}

struct pontos* get_ptos(pontos *p){
    return p;
}

int distancia_pto(pontos *p){
    double distance = sqrt((p->x2-p->x1) * (p->x2-p->x1)) + ((p->y2-p->y1) * (p->y2-p->y1));
    return distance;
}

void freeP(pontos *p){
    free(p);
}



