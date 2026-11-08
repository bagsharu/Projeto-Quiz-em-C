# Quiz em C — Entrega 3

## 1. Descrição do projeto

Este projeto consiste em um quiz de conhecimentos gerais desenvolvido em linguagem C, executado pelo terminal. O programa permite responder perguntas de múltipla escolha, cadastrar novas perguntas, consultar os enunciados existentes e visualizar um ranking de jogadores. Nesta terceira e última etapa, o sistema passou a utilizar estruturas (`structs`), organização modular e arquivos de texto para manter as perguntas e os resultados entre execuções.

## 2. Funcionalidades

- **Jogar:** solicita o nome do jogador, apresenta as perguntas cadastradas com quatro alternativas (A, B, C e D), verifica as respostas e calcula a pontuação e o percentual de acertos.
- **Cadastrar pergunta:** recebe o enunciado, quatro alternativas e a letra da resposta correta. Após o cadastro, as perguntas são gravadas automaticamente no arquivo de dados.
- **Listar perguntas:** exibe os enunciados das perguntas cadastradas.
- **Ranking dos jogadores:** apresenta os resultados registrados em ordem decrescente de percentual de acertos, utilizando bubble sort.
- **Persistência:** carrega perguntas e histórico ao iniciar e salva novos dados em arquivos `.txt`.

## 3. Estrutura do projeto

```text
capitulo-final/
├── src/
│   ├── main.c
│   ├── funcoes.c
│   └── modulo.c
├── include/
│   ├── funcoes.h
│   └── modulo.h
├── data/
│   ├── perguntas.txt
│   └── historico.txt
└── README.md
```

- `main.c`: controla o menu, os vetores e as chamadas das funções.
- `funcoes.c`: implementa o cadastro, a listagem, a execução do quiz e a exibição do ranking.
- `modulo.c`: implementa a leitura e a gravação dos arquivos, além da ordenação bubble sort.
- `funcoes.h`: declara as funções utilizadas pelo programa.
- `modulo.h`: define as structs e declara as funções de persistência e ordenação.
- `data/`: armazena os arquivos de perguntas e histórico.

## 4. Estruturas e armazenamento

O programa utiliza duas structs:

- **`Pergunta`**: armazena o enunciado, um vetor com quatro alternativas e a resposta correta.
- **`Jogador`**: armazena o nome, a quantidade de acertos, o total de perguntas respondidas e o percentual de acertos.

Os registros são mantidos em vetores durante a execução. O código define capacidade para **5 perguntas** e utiliza um vetor com capacidade para **100 registros de jogadores**.

### Formato dos arquivos

Cada linha de `data/perguntas.txt` representa uma pergunta, com os campos separados por ponto e vírgula:

```text
Qual e o maior oceano do planeta Terra?;Atlantico;Indico;Pacifico;Artico;C
```

Cada linha de `data/historico.txt` representa o resultado de uma partida:

```text
Ana;3;5;60.00
```

As perguntas são regravadas no arquivo após um novo cadastro. Os resultados das partidas são acrescentados ao histórico sem apagar os anteriores. Os arquivos são lidos na inicialização do programa.

## 5. Tecnologias e conceitos utilizados

- Linguagem C e compilador GCC.
- Visual Studio Code para desenvolvimento.
- Estruturas (`struct`), vetores, funções e passagem de parâmetros.
- Manipulação de arquivos com `fopen`, `fclose`, `fprintf` e `fscanf`.
- Ordenação manual com **bubble sort**, em ordem decrescente pelo percentual de acertos.

## 6. Requisitos e execução

É necessário ter um compilador de C, como o **GCC**, instalado e disponível no terminal.

Abra o terminal na pasta `capitulo-final` e compile o projeto:

```bash
gcc -Wall -Wextra -Iinclude src/main.c src/funcoes.c src/modulo.c -o programa
```

No **Windows (PowerShell)**, execute:

```powershell
.\programa.exe
```

No **Linux**, execute:

```bash
./programa
```

**Importante:** execute o programa a partir da pasta `capitulo-final`, pois os caminhos dos arquivos são relativos a ela (`data/perguntas.txt` e `data/historico.txt`).

## 7. Como utilizar

Ao iniciar, o programa carrega os registros disponíveis e apresenta o menu:

```text
=== Quiz ===
1. Jogar
2. Cadastrar pergunta
3. Listar perguntas
4. Ranking dos Jogadores
0. Sair
```

Escolha uma opção digitando seu número. Na opção **Jogar**, informe o nome e responda às questões com letras de A a D. Ao final, o programa mostra o resultado e registra a partida. Na opção **Ranking dos Jogadores**, os resultados são exibidos do maior para o menor percentual de acertos.

## 8. Observações

O projeto foi desenvolvido como atividade acadêmica, com foco na aplicação prática dos conteúdos de programação em C. O ranking considera **registros de partidas**, de modo que um mesmo nome pode aparecer mais de uma vez caso participe novamente. O formato dos arquivos utiliza ponto e vírgula como separador de campos; por isso, esse caractere deve ser evitado nos textos cadastrados.
