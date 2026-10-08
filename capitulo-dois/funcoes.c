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