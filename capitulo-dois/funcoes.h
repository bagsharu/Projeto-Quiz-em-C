#ifndef FUNCOES_H
#define FUNCOES_H

#define PERGUNTA 5
#define TAM 100

void exibirMenu();
void cadastrarPergunta(char enunciados[][TAM], char alternativaA[][TAM], char alternativaB[][TAM], char alternativaC[][TAM], char alternativaD[][TAM], char gabaritos[], int indice);
void listarPerguntas(char enunciados[][TAM], int totalPerguntas);
void exibirEstatisticas(int totalPerguntas, int totalAcertos, int totalRespostas);
void jogar(char enunciados[][TAM], char alternativaA[][TAM], char alternativaB[][TAM], char alternativaC[][TAM], char alternativaD[][TAM], char gabaritos[], int totalPerguntas, int *totalAcertos, int *totalRespostas);

#endif