#include <stdio.h>
#include <string.h>
#include "funcoes.h"
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

            if(totalPerguntas < PERGUNTA){

                cadastrarPergunta(enunciados,alternativaA,alternativaB,alternativaC,alternativaD, gabaritos, totalPerguntas);

                totalPerguntas++;
            } else{

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