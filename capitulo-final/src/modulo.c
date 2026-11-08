#include "../include/funcoes.h"
#include "../include/modulo.h"
#include <stdio.h>
#include <string.h>

#define PERGUNTA 5
#define TAM 100

void salvarPerguntas (Pergunta perguntas[], int totalPerguntas) {

    FILE *arquivo = fopen("data/perguntas.txt", "w");

    if (arquivo == NULL){

        printf("Erro ao abrir o arquivo");

        return;
    }

    for (int i = 0; i < totalPerguntas; i++) {
    fprintf(arquivo, "%s;%s;%s;%s;%s;%c\n",
        perguntas[i].enunciado,
        perguntas[i].alternativas[0],
        perguntas[i].alternativas[1],
        perguntas[i].alternativas[2],
        perguntas[i].alternativas[3],
        perguntas[i].respostaCorreta
    );
}

    fclose(arquivo);
}

int carregarPerguntas(Pergunta perguntas[]){

    FILE * arquivo = fopen("data/perguntas.txt", "r");
    int totalCadastrado = 0;
    if (arquivo == NULL) {
        printf("Arquivo de perguntas inválido.\n");
        return 0;
    }

    while (totalCadastrado < PERGUNTA) {
        int leitura = fscanf(arquivo,
            " %99[^;];%99[^;];%99[^;];%99[^;];%99[^;]; %c%*[^\n]",
            perguntas[totalCadastrado].enunciado,
            perguntas[totalCadastrado].alternativas[0],
            perguntas[totalCadastrado].alternativas[1],
            perguntas[totalCadastrado].alternativas[2],
            perguntas[totalCadastrado].alternativas[3],
            &perguntas[totalCadastrado].respostaCorreta
        );

        if (leitura != 6) {
            break;
        }

        totalCadastrado++;
    }

    fclose(arquivo);

    return totalCadastrado;

}

void salvarHistorico (Jogador jogadores[], int totalJogadores) {

    if (totalJogadores <= 0) {

        return;
    }

    FILE *arquivo = fopen("data/historico.txt", "a");

    if (arquivo == NULL){

        printf("Erro ao abrir o arquivo");

        return;
    }

    int i = totalJogadores - 1;
    fprintf(arquivo, "%s;%d;%d;%.2f\n", jogadores[i].nome,
                                          jogadores[i].acertos,
                                          jogadores[i].totalPartidas,
                                          jogadores[i].percentual
        
    );

    fclose(arquivo);
}