#ifndef MODULO_H
#define MODULO_H

#define TAM 100
#define PERGUNTA 5
#define JOGADORES 100

typedef struct {
    char enunciado[TAM];
    char alternativas[4][TAM];
    char respostaCorreta;
} Pergunta;

typedef struct {
    char nome[TAM];
    int acertos;
    int totalPartidas;
    float percentual;
} Jogador;


void salvarPerguntas (Pergunta perguntas[PERGUNTA], int totalPerguntas);
void carregarPerguntas (Pergunta perguntas[PERGUNTA]);

#endif