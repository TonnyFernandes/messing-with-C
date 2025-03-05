#include <stdio.h>

typedef struct sBanda{
    char nome[50];
    char genero[50];
    int numIntegrantes;
    int posicao;
}TBanda;

void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void rankearBandas(TBanda bandas[]){
    printf("Banda 1: %s", bandas[0].nome);
}

int main(){
    TBanda listaBanda[5];
    
    for(int i=0; i<5; i++){
        printf("Digite o nome da %da banda\n", i+1);
        scanf("%[^\n]", &listaBanda[i]);
        limparBuffer();
    }
    rankearBandas(listaBanda[]);
    return 0;
}
