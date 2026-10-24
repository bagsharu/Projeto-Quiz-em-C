#include <stdio.h>
#include <string.h>
#include "../include/funcoes.h"
#include "../include/modulo.h"
#define TAM 100
#define PERGUNTA 5

int main() {


    int menuNav = 127, totalPerguntas = 0, totalAcertos = 0, totalRespostas = 0;

    Pergunta perguntas[PERGUNTA];

    while (menuNav != 0){

        exibirMenu();

        scanf("%d", &menuNav);
        while (getchar() != '\n');

        printf("Opcao: %d\n", menuNav);

        switch (menuNav)
        {
        case 1:

            jogar(perguntas, totalPerguntas, &totalAcertos, &totalRespostas);
            break;
        
        case 2:
            if (totalPerguntas < PERGUNTA) {
                if (cadastrarPergunta(perguntas, totalPerguntas) == 1) {
                    totalPerguntas++;
                    printf("Pergunta cadastrada com sucesso!\n");
                }
            } else {
                printf("Limite de perguntas atingido!\n");
            }
            break;
        case 3:
            listarPerguntas(perguntas, totalPerguntas);
            break;
        case 4:
            exibirEstatisticas(totalPerguntas, totalAcertos, totalRespostas);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;

        }

    }

 
    return 0;
}