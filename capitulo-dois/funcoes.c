#include "funcoes.h"
#include <stdio.h>

void exibirMenu(){

    printf("=== Quiz ===\n"
        "1. Jogar\n"
        "2. Cadastrar pergunta\n"
        "3. Listar perguntas\n"
        "4. Estatisticas\n"
        "0. Sair\n"
        "Digite uma opcao:\n");
}

void cadastrarPergunta(char enunciados[][TAM], char alternativaA[][TAM], char alternativaB[][TAM], char alternativaC[][TAM], char alternativaD[][TAM], char gabaritos[], int indice)
    {
    printf("Digite a pergunta numero %d:\n", indice+1);
        fgets(enunciados[indice], TAM, stdin);

        printf("Insira a alternativa A:\n");
        fgets(alternativaA[indice], TAM, stdin);

        printf("Insira a alternativa B:\n");
        fgets(alternativaB[indice], TAM, stdin);

        printf("Insira a alternativa C:\n");
        fgets(alternativaC[indice], TAM, stdin);

        printf("Insira a alternativa D:\n");
        fgets(alternativaD[indice], TAM, stdin);

        printf("Agora, qual delas é a correta?\n");
        scanf(" %c", &gabaritos[indice]);
        while (getchar() != '\n');
}

void listarPerguntas(char enunciados[][TAM], int totalPerguntas)
{
    if (totalPerguntas == 0) {
        printf("Nenhuma pergunta cadastrada!\n");
        return;
    }

    printf("\n=== Perguntas cadastradas ===\n");

    for (int i = 0; i < totalPerguntas; i++) {
        printf("%d. %s", i + 1, enunciados[i]);
    }
}

void exibirEstatisticas(int totalPerguntas, int totalAcertos, int totalRespostas)
{
    printf("\n=== Estatisticas ===\n");
    printf("Perguntas cadastradas: %d\n", totalPerguntas);

    if (totalRespostas > 0) {
        printf("Media de acertos: %.2f%%\n",
               (totalAcertos * 100.0) / totalRespostas);
    } else {
        printf("Media de acertos: 0.00%%\n");
    }
}