#include <stdio.h>
#include <stdlib.h>

struct individuo {
int codigo_genetico[10]; // valores binarios aleatorios
float aptidao_abs;// pontencial de cada individuo (0.0 <= aptidao <= 10.0)
float aptidao_relativa; // deve ser calculada em tempo de execu��o...
};
struct populacao {
struct individuo *pop; // um vetor de N individuos
int tamanho; // tamanho N da popula��o (N = 100)
};
typedef struct populacao populacao;

float gera_aptidao(){
    float aptidao;
    aptidao = ((float) rand()) / ((float) RAND_MAX)*10.0;
    return aptidao;
}

int sorte_binarios(){
    int x;
    x = rand();
    if(x%2==0){
        return 1;
    }
    return 0;
}


int main(){
    struct individuo *ind;
    int n, i, j;
    float apt = 0.0;
    printf("Digite o numero de individuos: ");
    scanf("%d",&n);
    ind = (struct individuo *)malloc(n*sizeof(struct individuo));
    for(i=0;i<n;i++){
        for(j=0;j<10;j++){
    ind[i].codigo_genetico[j] = sorte_binarios();
    printf("%d\n",ind[i].codigo_genetico[j]);
        }
    }
    for(i=0;i<n;i++){
    ind[i].aptidao_abs = gera_aptidao();
    printf("%f\n",ind[i].aptidao_abs );
    }
    for(i=0;i<n;i++){
        apt = apt + ind[i].aptidao_abs;
        printf("%f\n",apt);
    }
    for(i=0;i<n;i++){
        ind[i].aptidao_relativa = ind[i].aptidao_abs/apt;
        printf("%f\n",ind[i].aptidao_relativa);
    }


return 0;
}
