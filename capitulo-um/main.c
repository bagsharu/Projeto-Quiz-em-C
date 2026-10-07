#include <stdio.h>
#include <string.h>
#define TAM 100

int main() {

    int pontuacao = 0, rodada = 0;
    float percentual;
    char enunciado[TAM], altA[TAM], altB[TAM], altC[TAM], altD[TAM], respostaCorreta, respostaUsuario;

    for(rodada = 1; rodada <= 1; rodada++){

        printf("Digite a pergunta numero %d:\n", rodada);
        fgets(enunciado, TAM, stdin);
        
        
        printf("Insira a alternativa A:\n");
        fgets(altA, TAM, stdin);
        
        printf("Insira a alternativa B:\n");
        fgets(altB, TAM, stdin);
       
        printf("Insira a alternativa C: \n");
        fgets(altC, TAM, stdin);

        printf("Insira a alternativa D: \n");
        fgets(altD, TAM, stdin);

        printf("Agora, qual delas é a correta?\n");
        scanf(" %c", &respostaCorreta);
        
        printf("==========================================================\n");
        
        printf("Pergunta %d: %s", rodada, enunciado);
        printf("A) %s", altA);
        printf("B) %s", altB);
        printf("C) %s", altC);
        printf("D) %s", altD);

        printf("Insira a sua resposta: ");
        scanf(" %c", &respostaUsuario);

        if(respostaUsuario == respostaCorreta) {

            pontuacao++;

        }

        }

        printf("Resultado final: %d/1", pontuacao);
    
    return 0;
}