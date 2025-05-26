#include <stdio.h>

int soma(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
int mult(int x, int y){
    return x*y;
}
float divi(int x, int y){
    return x/y;
}

int main() {
    int opcao, x, y;
    
    do{
        printf("Digite dois números inteiros\n");
        scanf("%d %d", &x, &y);
        
        
        printf("Digite 0 para sair\n");
        printf("Digite 1 para soma\n");
        printf("Digite 2 para subtração\n");
        printf("Digite 3 para multiplicação\n");
        printf("Digite 4 para divisão\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            
            //saída
            case 0:
                printf("Agradeço pela preferência");
                break;
            //soma
            case 1:
                printf("Soma: %d\n\n", soma(x, y));
                break;
            
            //sub
            case 2:
                printf("Diferença: %d\n\n", sub(x, y));
                break;
            
            //mult
            case 3:
                printf("Produto: %d\n\n", mult(x, y));
                break;
            
            //div
            case 4:
                if(y==0){
                    printf("Erro! Divisão por zero!\n\n");
                    break;
                }
                printf("Quociente: %.2f\n\n", divi(x, y));
                break;
            
            default:
                printf("Opção inválida!\n\n");
        }
    }while(opcao!=0);

    return 0;
}
