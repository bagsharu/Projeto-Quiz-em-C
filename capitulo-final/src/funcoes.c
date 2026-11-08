#include "../include/funcoes.h"
#include "../include/modulo.h"
#include <stdio.h>
#include <string.h>

void exibirMenu(){

    printf("=== Quiz ===\n"
        "1. Jogar\n"
        "2. Cadastrar pergunta\n"
        "3. Listar perguntas\n"
        "4. Estatisticas\n"
        "5. Salvar perguntas cadastradas\n"
        "0. Sair\n"
        "Digite uma opcao:\n");
}

// Recebe a referência do array de structs e o índice de registro da pergunta,
// o que garante que será cadastrada devidamente na ordem de 1 a 5.

int cadastrarPergunta(Pergunta perguntas[PERGUNTA], int indice) {
    printf("Digite a pergunta numero %d:\n", indice + 1);
    fgets(perguntas[indice].enunciado, TAM, stdin);
    perguntas[indice].enunciado[strcspn(perguntas[indice].enunciado, "\n")] = '\0';

    printf("Insira a alternativa A:\n");
    fgets(perguntas[indice].alternativas[0], TAM, stdin);
    perguntas[indice].alternativas[0][strcspn(perguntas[indice].alternativas[0], "\n")] = '\0';

    printf("Insira a alternativa B:\n");
    fgets(perguntas[indice].alternativas[1], TAM, stdin);
    perguntas[indice].alternativas[1][strcspn(perguntas[indice].alternativas[1], "\n")] = '\0';

    printf("Insira a alternativa C:\n");
    fgets(perguntas[indice].alternativas[2], TAM, stdin);
    perguntas[indice].alternativas[2][strcspn(perguntas[indice].alternativas[2], "\n")] = '\0';

    printf("Insira a alternativa D:\n");
    fgets(perguntas[indice].alternativas[3], TAM, stdin);
    perguntas[indice].alternativas[3][strcspn(perguntas[indice].alternativas[3], "\n")] = '\0';

    printf("Agora, qual delas e a correta?\n");
    scanf(" %c", &perguntas[indice].respostaCorreta);
    while (getchar() != '\n');

    return 1;
}

void listarPerguntas(Pergunta perguntas[PERGUNTA], int totalPerguntas)
{
    if (totalPerguntas == 0) {
        printf("Nenhuma pergunta cadastrada!\n");
        return;
    }

    printf("\n=== Perguntas cadastradas ===\n");

    for (int i = 0; i < totalPerguntas; i++) {
        printf("%d. %s\n", i + 1, perguntas[i].enunciado);
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

void jogar(Pergunta perguntas[PERGUNTA], int totalPerguntas, int *totalAcertos, int *totalRespostas) {
    char resposta;
    int pontos = 0;

    if (totalPerguntas == 0) {
        printf("Nenhuma pergunta cadastrada!\n");
        return;
    }

    printf("\n=== Iniciando Quiz ===\n");

    for (int i = 0; i < totalPerguntas; i++) {
        printf("\nPergunta %d:\n", i + 1);
        printf("%s\n", perguntas[i].enunciado);

        printf("A) %s\n", perguntas[i].alternativas[0]);
        printf("B) %s\n", perguntas[i].alternativas[1]);
        printf("C) %s\n", perguntas[i].alternativas[2]);
        printf("D) %s\n", perguntas[i].alternativas[3]);

        do {
            printf("Sua resposta (A - D): \n");
            scanf(" %c", &resposta);
            while (getchar() != '\n');

            if (resposta < 'A' || resposta > 'D') {
                printf("Resposta invalida!\n");
            }

        } while (resposta < 'A' || resposta > 'D');

        (*totalRespostas)++;

        if (resposta == perguntas[i].respostaCorreta) {
            printf("Resposta correta!\n");
            pontos++;
            (*totalAcertos)++;
        } else {
            printf("Resposta incorreta!\n");
        }
    }

    printf("\n=== Resultado ===\n");
    printf("Acertos: %d de %d\n", pontos, totalPerguntas);
    printf("Porcentagem: %.2f%%\n",
           (pontos * 100.0) / totalPerguntas);
}