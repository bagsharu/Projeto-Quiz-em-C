#ifndef FUNCOES_H
#define FUNCOES_H
#include "../include/modulo.h"


#define PERGUNTA 5
#define TAM 100

void exibirMenu();
int cadastrarPergunta(Pergunta perguntas[PERGUNTA], int indice);
void listarPerguntas(char enunciados[][TAM], int totalPerguntas);
void exibirEstatisticas(int totalPerguntas, int totalAcertos, int totalRespostas);
void jogar(Pergunta perguntas[PERGUNTA], int totalPerguntas, int *totalAcertos, int *totalRespostas);

#endif