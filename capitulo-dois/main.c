#include <stdio.h>
#include <string.h>
#include "funcoes.h"
#define TAM 100
#define PERGUNTA 5

int main() {


    int menuNav = 127, totalPerguntas = 0;
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
            // Chama função Jogar()
            // Executa o quiz com as perguntas cadastradas, valida respostas e calcula pontos
            break;
        
        case 2:
            // Chama função Cadastrar()
            // Recebe o enunciado, quatro alternativas e resposta correta, armazenando a pergunta

            if(totalPerguntas < PERGUNTA){

                cadastrarPergunta(enunciados,alternativaA,alternativaB,alternativaC,alternativaD, gabaritos, totalPerguntas);

                totalPerguntas++;
            } else{

                printf("Limite de perguntas atingido!\n");
            }

            break;
        case 3:
            // Chama função Listar()
            // Exibe as perguntas cadastradas (enunciados)
            listarPerguntas(enunciados, totalPerguntas);
            break;
        case 4:
            // Chama função Estatísticas()
            // Imprime o total de perguntas e a média de acertos
        default:
            printf("Opcao invalida!\n");
            break;
        }

    }

    // int pontuacao = 0, rodada = 0;
    // float percentual;1
    // char enunciado[TAM], altA[TAM], altB[TAM], altC[TAM], altD[TAM], respostaCorreta, respostaUsuario;

    // for(rodada = 1; rodada <= 5; rodada++){

    //     printf("Digite a pergunta numero %d:\n", rodada);
    //     fgets(enunciado, TAM, stdin);

    //     printf("Insira a alternativa A:\n");
    //     fgets(altA, TAM, stdin);

    //     printf("Insira a alternativa B:\n");
    //     fgets(altB, TAM, stdin);

    //     printf("Insira a alternativa C:\n");
    //     fgets(altC, TAM, stdin);

    //     printf("Insira a alternativa D:\n");
    //     fgets(altD, TAM, stdin);

    //     printf("Agora, qual delas é a correta?\n");
    //     scanf(" %c", &respostaCorreta);
    //     while (getchar() != '\n');

    //     printf("==========================================================\n");

    //     printf("Pergunta %d: %s", rodada, enunciado);
    //     printf("A) %s", altA);
    //     printf("B) %s", altB);
    //     printf("C) %s", altC);
    //     printf("D) %s", altD);

    //     do {
    //         printf("Insira a sua resposta (A, B, C ou D): ");
    //         scanf(" %c", &respostaUsuario);
    //         while (getchar() != '\n');

    //         if (respostaUsuario != 'A' && respostaUsuario != 'B' &&
    //             respostaUsuario != 'C' && respostaUsuario != 'D') {
    //             printf("Resposta invalida! Tente novamente.\n");
    //         }

    //     } while (respostaUsuario != 'A' && respostaUsuario != 'B' &&
    //              respostaUsuario != 'C' && respostaUsuario != 'D');

    //     if(respostaUsuario == respostaCorreta) {
    //         pontuacao++;
    //     }
    // }

    // percentual = (pontuacao / 5.0) * 100;

    // printf("Resultado final: %d/5 acertos (%.2f%%)\n", pontuacao, percentual);

    return 0;
}