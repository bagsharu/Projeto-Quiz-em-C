#include "../include/funcoes.h"
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

int cadastrarPergunta(char enunciados[][TAM], char alternativaA[][TAM], char alternativaB[][TAM], char alternativaC[][TAM], char alternativaD[][TAM], char gabaritos[], int indice)
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

        return 1;
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

void jogar(char enunciados[][TAM], char alternativaA[][TAM], char alternativaB[][TAM], char alternativaC[][TAM], char alternativaD[][TAM], char gabaritos[], int totalPerguntas, int *totalAcertos, int *totalRespostas) {
    char resposta;
    int pontos = 0;

    if (totalPerguntas == 0) {
        printf("Nenhuma pergunta cadastrada!\n");
        return;
    }

    printf("\n=== Iniciando Quiz ===\n");

    for (int i = 0; i < totalPerguntas; i++) {
        printf("\nPergunta %d:\n", i + 1);
        printf("%s", enunciados[i]);

        printf("A) %s", alternativaA[i]);
        printf("B) %s", alternativaB[i]);
        printf("C) %s", alternativaC[i]);
        printf("D) %s", alternativaD[i]);

        do {
            printf("Sua resposta (A-D): ");
            scanf(" %c", &resposta);
            while (getchar() != '\n');

            if (resposta < 'A' || resposta > 'D') {
                printf("Resposta invalida!\n");
            }

        } while (resposta < 'A' || resposta > 'D');

        (*totalRespostas)++;

        if (resposta == gabaritos[i]) {
            printf("Resposta correta!\n");
            pontos++;
            (*totalAcertos)++;
        } else {
            printf("Resposta incorreta! Correta: %c\n", gabaritos[i]);
        }
    }

    printf("\n=== Resultado ===\n");
    printf("Acertos: %d de %d\n", pontos, totalPerguntas);
    printf("Porcentagem: %.2f%%\n",
           (pontos * 100.0) / totalPerguntas);
}