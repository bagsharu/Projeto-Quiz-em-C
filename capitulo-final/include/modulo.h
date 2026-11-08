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
    int totalPerguntas;
    float percentual;
} Jogador;


void salvarPerguntas (Pergunta perguntas[PERGUNTA], int totalPerguntas);
int carregarPerguntas (Pergunta perguntas[PERGUNTA]);

void salvarHistorico (Jogador jogadores[TAM], int totalJogadores);
int carregarHistorico (Jogador jogadores[TAM]);

void bubbleSort (Jogador jogadores[TAM], int totalJogadores);

#endif