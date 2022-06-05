#ifndef PONTOS_H_INCLUDED
#define PONTOS_H_INCLUDED
typedef struct pontos pontos;
struct pontos* generate();
int set_pto(pontos *p, int X1, int X2, int Y1, int Y2);
void freePonto(pontos *p);
struct pontos* get_ptos(pontos *p);
int distancia_pto(pontos *p);


#endif // PONTOS_H_INCLUDED
