#include <stdio.h>
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
        
        printf("Insira uma alternativa B:\n");
        fgets(altB, TAM, stdin);

        
        printf("Insira uma alternativa C: \n");
        fgets(altC, TAM, stdin);

        printf("Insira uma alternativa D: \n");
        fgets(altD, TAM, stdin);

        printf("Agora, qual delas é a correta?\n");
        scanf(" %c", &respostaCorreta);
        
    }
    
    return 0;
}