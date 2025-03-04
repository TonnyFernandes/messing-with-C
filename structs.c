#include <stdio.h>

typedef struct sListaCompras{
    int cachosBanana;
    int macas;
    int amaciante;
    int esponja;
}TListaCompras;
typedef struct sTarefasDomesticas{
    int banheiro;
    int poeira;
    int panelas;
}TDomestica;
typedef struct sFaculdade{
    int estruturaDados;
    int projetoIntegrador;
}TFaculdade;
typedef struct sProjetosPessoais{
    int videosCurso;
    int tarefasCurso;
}TProjetos;

typedef struct sListaTarefas{
    TListaCompras compras;
    TDomestica domestica;
    TFaculdade faculdade;
    TProjetos projetos;
}TListaTarefas;


int main() {
    TListaTarefas lista={
        .compras={2, 5, 1, 1},
            /*
                Tradução:
                    dois cachos de banana para comprar
                    cinco maçãs para comprar
                    uma amaciante e uma esponja para comprar
                Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa
            */
        .domestica={1, 1, 1},
            /*
                Tradução:
                    Ainda é necessário limpar o banheiro, tirar a poeira da casa e lavar as panelas
                Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa
            */
        .faculdade={1, 1},
            /*
                Tradução
                    Há atividades a serem feitas nas disciplinas de Estrutura de Dados e Projeto Integrador
                Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa
            */
        .projetos={2, 4},
            /*
                Tradução:
                    Dois videos do curso para ver
                    Quatro tarefas do curso para fazer
                Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa
            */
    };
    int escolha;
    
    do{
        printf("Digite 0 para fechar o programa\n");
        printf("Digite 1 para ver a lista completa\n");
        printf("Digite 2 para ver a lista de compras\n");
        printf("Digite 3 para ver a lista de tarefas domésticas\n");
        printf("Digite 4 para ver a lista da faculdade\n");
        printf("Digite 5 para ver a lista de projetos pessoais\n");
        scanf("%d", &escolha);
        
        printf("\n");
        
        switch(escolha){
            case 0:
                printf("Programa fechado!\n");
                break;
            
            case 1:
                // função listaCompleta();
                break;
            
            case 2:
                // função listaCompras();
                break;
            
            case 3:
                // função listaDomestica();
                break;
            
            case 4:
                // função listaFaculdade();
                break;
            
            case 5:
                // função listaProjetos();
                break;
            
            default:
                printf("Escolha inválida, tente novamente\n\n");
        }
    }while(escolha!=0);

    return 0;
}
