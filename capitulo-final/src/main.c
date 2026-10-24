#include <stdio.h>
#include <string.h>
#include "../include/funcoes.h"
#include "../include/modulo.h"
#define TAM 100
#define PERGUNTA 5

int main() {


    int menuNav = 127, totalPerguntas = 0, totalAcertos = 0, totalRespostas = 0;
    char enunciados[PERGUNTA][TAM];
    char alternativaA[PERGUNTA][TAM];
    char alternativaB[PERGUNTA][TAM];
    char alternativaC[PERGUNTA][TAM];
    char alternativaD[PERGUNTA][TAM];
    char gabaritos[PERGUNTA];

    Pergunta perguntas[PERGUNTA];

    while (menuNav != 0){

        exibirMenu();

        scanf("%d", &menuNav);
        while (getchar() != '\n');

        printf("Opcao: %d\n", menuNav);

        if(menuNav > 4 || menuNav < 0){
            printf("Opcao invalida!\n");
        }

        switch (menuNav)
        {
        case 1:

            jogar(enunciados, alternativaA, alternativaB, alternativaC, alternativaD, gabaritos, totalPerguntas, &totalAcertos, &totalRespostas);
            break;
        
        case 2:
            if (totalPerguntas < PERGUNTA) {
                if (cadastrarPergunta(enunciados, alternativaA, alternativaB, alternativaC, alternativaD, gabaritos, totalPerguntas) == 1) {
                    totalPerguntas++;
                    printf("Pergunta cadastrada com sucesso!\n");
                }
            } else {
                printf("Limite de perguntas atingido!\n");
            }
            break;
        case 3:
            listarPerguntas(enunciados, totalPerguntas);
            break;
        case 4:
            exibirEstatisticas(totalPerguntas, totalAcertos, totalRespostas);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }

    }

 
    return 0;
}