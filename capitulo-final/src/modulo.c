#include "../include/funcoes.h"
#include "../include/modulo.h"
#include <stdio.h>

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