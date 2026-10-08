#include <stdio.h>
#include <string.h>
#define TAM 100

int main() {

    int pontuacao = 0, rodada = 0;
    float percentual;
    char enunciado[TAM], altA[TAM], altB[TAM], altC[TAM], altD[TAM], respostaCorreta, respostaUsuario;

    for(rodada = 1; rodada <= 5; rodada++){

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
        while (getchar() != '\n'); 
        
        printf("==========================================================\n");
        
        printf("Pergunta %d: %s", rodada, enunciado);
        printf("A) %s", altA);
        printf("B) %s", altB);
        printf("C) %s", altC);
        printf("D) %s", altD);

        printf("Insira a sua resposta: ");
        scanf(" %c", &respostaUsuario);
        while (getchar() != '\n'); 

        if(respostaUsuario == respostaCorreta) {

            pontuacao++;

        }

        }

        percentual = (pontuacao / 5.0) * 100;
    
        printf("Resultado final: %d/5 acertos (%.2f%%)\n", pontuacao, percentual);
    return 0;
}