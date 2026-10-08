Quiz em C — Checkpoint 2
Projeto desenvolvido para a disciplina de Algoritmos e Programação, com foco em funções e modularização na linguagem C.
Descrição
O programa é um quiz executado no terminal. Por meio de um menu interativo, o usuário pode cadastrar perguntas de múltipla escolha, jogar, consultar os enunciados cadastrados e visualizar estatísticas de desempenho.
As perguntas ficam armazenadas em matrizes durante a execução do programa. Cada pergunta possui um enunciado, quatro alternativas (A, B, C e D) e uma resposta correta. O limite configurado é de cinco perguntas.
Funcionalidades
1 — Jogar: apresenta as perguntas cadastradas, recebe respostas de A a D, informa acertos e erros e exibe a pontuação e o percentual da partida.
2 — Cadastrar pergunta: solicita o enunciado, as quatro alternativas e o gabarito. O cadastro respeita o limite de perguntas e a função retorna um valor para indicar a conclusão da operação.
3 — Listar perguntas: mostra os enunciados cadastrados.
4 — Estatísticas: exibe a quantidade de perguntas cadastradas e o percentual acumulado de acertos nas respostas das partidas.
0 — Sair: encerra o programa.
Estrutura do projeto
```text
Projeto-Quiz-em-C/
├── main.c
├── funcoes.c
├── funcoes.h
└── README.md
```
`main.c`: contém a função principal, o menu com `while` e `switch` e a coordenação das operações.
`funcoes.c`: contém a implementação das funções do quiz.
`funcoes.h`: contém os protótipos das funções e as definições compartilhadas.
`README.md`: apresenta o projeto e explica como compilá-lo e executá-lo.
Requisitos
Compilador GCC instalado e disponível no terminal.
Terminal do Windows, PowerShell ou terminal integrado do VS Code.
Compilação
Abra o terminal na pasta que contém `main.c`, `funcoes.c` e `funcoes.h` e execute:
```bash
gcc main.c funcoes.c -o main.exe
```
É necessário compilar os dois arquivos `.c` juntos.
Execução
No PowerShell, execute:
```powershell
.\main.exe
```
No Prompt de Comando (CMD), execute:
```cmd
main.exe
```
Após iniciar o programa, escolha uma opção do menu. Cadastre pelo menos uma pergunta antes de selecionar Jogar. Para encerrar, digite `0`.
Observações
As perguntas são mantidas apenas na memória durante a execução; ao fechar o programa, os cadastros não são salvos.
O projeto não utiliza `struct` nem leitura ou gravação de arquivos para armazenar perguntas.
O código foi separado em funções para organizar as responsabilidades de cadastro, listagem, jogo, menu e estatísticas.