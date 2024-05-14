# Trabalho Prático de Algoritmo e Estrutura de Dados III

Trabalho da Disciplica de Algoritimo e Estrutura de Dados III usando a linguagem de programação C++, que consiste na criação e comparação de três estruturas, uma Árvore Binária, Árvore AVL, e Pesquisa Sequencial, além de contar com um programa gerador de arquivos .txt que gera uma chave qualquer do tipo inteiro, um inteiro qualquer e um char de mil caracteres respectivamente. Nesse arquivo estará presente as intruções para a execução correta dos arquivos presentes nesse repositório.

## Conteúdo

1. [Gerador de Registros](#gerador-de-registros)
2. [Árvore Binária](#árvore-binária)
3. [Árvore AVL](#árvore-avl)
4. [Pesquisa Sequencial](#pesquisa-sequencial)
5. [Observações Gerais](#observações-gerais)
6. [Autores](#autores)

## Gerador de Registros 

O Gerador de Registros cria os registros e os armazena em 2 arquivos .txt diferentes, um contendo os registros com as chaves de forma ordenada, e outro contendo os registros com as chaves de maneira desordenada.

### Arquivo: `gerador.cpp`

#### Estruturas de Dados

- **Registro**: Uma estrutura que representa um registro com três campos - chave (um número inteiro), dado1 (um número inteiro) e dado2 (um char de 1000 caracteres).

#### Funções 

- `gerar_char()` Gera um char de 1000 caracteres;
- `int gerar_numero()`: Gera um número inteiro aleatório entre 1 e 100.

### Como Usar


1. Certifique-se que está no diretório "Arvores";
2. Compile o código; 
3. Execute o programa;
4. Os arquivos de dados ordenados e desordenados são gerados com base no número de registros escolhidos pelo usuário.

## Árvore Binária

A Árvore Binária é uma estrutura de dados que armazena os registros de forma que sempre a subárvore a direita do nó vai conter chaves maiores do que a do nó atual e a subárvore a esquerda vai conter chaves menores do que a do nó atual.

### Arquivo: `arvore_binaria.cpp`

#### Estruturas de Dados

- **Tiporeg**: Uma estrutura que representa um registro com três campos - chave (um número inteiro), dado1 (um número inteiro) e dado2 (uma char de 1000 caracteres);
- **No**: Uma estrutura que representa um nó em uma árvore binária, com um registro, ponteiros para os nós à esquerda e à direita e uma variável para contar o número de interações durante as operações;
- **Arvore Binaria** Estrutura geral da árvore binaria.

#### Funções

- `novoNo(Tiporeg pRegistro)`: Cria um novo nó com um registro específico e retorna o ponteiro para esse nó;
- `No *inserir(No *no, Tiporeg registro)`: Insere um novo nó na arvore;
- `bool Buscar(No *no, int chave)`: Função para buscar uma chave na árvore binária;
- `Tiporeg retornaTipoReg(string s)`: Retorna o registro.

### Como Usar

1. Certifique-se que está no diretorio correto;
2. Na linha 144 vai estar especificando o arquivo txt (arquivo de entrada) em que irá ter os registros em que o programa irá inserir na árvore, certifique-se de que está executando o arquivo que deseja;
3. Nas linhas 181 e 185, certifique-se de colocar um numero de chaves aleatorias com no minimo o dobro do numero de registros do arquivo de entrada para evitar limitar o número maximo das chaves;
4. Compile o codigo;
5. Execute o programa;
6. Os arquivos de saida iram ser gerados na pasta "Arquivos de Saida/arvore_binaria".

## Árvore AVL

A Árvore AVL é uma árvore binária balanceada que mantém seu fator de equilíbrio.

### Arquivo: `arvore_avl.cpp`

#### Estruturas de Dados

- **Tiporeg**: Uma estrutura que representa um registro com três campos - chave (um número inteiro), dado1 (um número inteiro) e dado2 (uma char de 1000 caracteres);
- **No**: Uma estrutura que representa um nó em uma árvore AVL, com um registro, ponteiros para os nós à esquerda e à direita, uma variável para contar o número de interações durante as operações e uma variável para manter a altura do nó;
- **Arvore_avl**: Estrutura geral da Árvore Avl.

#### Funções

- `novoNo(Tiporeg pRegistro)`: Função para retornar o ponteiro para um novo nó;
- `rotacaoDireita(No* y)`: Realiza uma rotação à direita em um nó da árvore AVL para manter o equilíbrio;
- `rotacaoEsquerda(No* x)`: Realiza uma rotação à esquerda em um nó da árvore AVL para manter o equilíbrio;
- `fatorBalanceamento(No* no)`: Calcula o fator de balanceamento de um nó (diferença entre a altura da subárvore esquerda e da subárvore direita);
- `inserir(No *no, Tiporeg registro)`: Insere um nó em um registro;
- `bool Buscar(No *no, int chave)`: Faz a busca de um nó;
- `retornaTipoReg(string s)`: Retorna o registro.


### Como Usar

1. Certifique-se que está no diretorio correto
2. Na linha 236 vai estar especificando o arquivo txt (arquivo de entrada) em que irá ter os registros em que o programa irá inserir na árvore, certifique-se de que está executando o arquivo que deseja.
3. Nas linhas 272 e 275, certifique-se de colocar um numero de chaves aleatorias com no minimo o dobro do numero de registros do arquivo de entrada para evitar limitar o número maximo das chaves.
4. Compile o codigo.
5. Execute o programa.
6. Os arquivos de saida iram ser gerados na pasta "Arquivos de Saida/arvore_avl"


## Pesquisa Sequencial

O código de Pesquisa Sequencial armazena os registros em um vetor

### Arquivo: `pesquisa_sequencial.cpp`

#### Estruturas de Dados

- **Tiporeg**: Uma estrutura que representa um registro com três campos - chave (um número inteiro), dado1 (um número inteiro) e dado2 (uma char de 1000 caracteres).

#### Funções

- `retornaTipoReg(string s)` Retorna o registro.

#### Funcionalidades

- Gera chaves aleatórias e busca por elas nos registros.
- Registra o tempo de busca e o número de comparações realizadas.
- Armazena os resultados das buscas em arquivos de saída.

### Como Usar

1. Certifique-se que está no diretorio correto
2. Na linha 53 vai estar especificando o arquivo txt (arquivo de entrada) em que irá ter os registros em que o programa irá inserir na árvore, certifique-se de que está executando o arquivo que deseja.
3. Na linha 61 irá ocorrer uma alocação dinamica para armazenar os registros em "TipoReg[x]". É necessário que x seja igual a quantidade de registros do seu arquivo de entrada, para que ele aloque memoria o suficiente para executar o programa normalmente.
4. Nas linhas 80 e 83, certifique-se de colocar um numero de chaves aleatorias com no minimo o dobro do numero de registros do arquivo de entrada para evitar limitar o número maximo das chaves.
5. Execute o programa.
6. Os arquivos de saida iram ser gerados na pasta "Arquivos de Saida/pesquisa_sequencial"

## Observações Gerais

- O gerador gera os arquivos na pasta "Arquivos de Entrada"
- É importante que as pastas "Arquivos de Saida" e "Arquivos de entrada estejam no mesmo lugar onde o executável do programa for gerado
- Se as pastas não estiverem no mesmo lugar do executável gerado, o programa vai reportar "Erro ao abrir arquivo" ou "Erro ao abrir arquivo de saida" e encerrar.
- Quando executar o programa, caso seja gerada uma pasta "output" com o executável, mova as pastas "Arquivos de Saida" e "Arquivos de Entrada" para dentro dessa pasta e fazer as correções nos diretorios dos arquivos de entrada e saida.
- A pasta "Arquivos de Saida" tem dentro 3 pastas distintas, "pesquisa_sequencial", "arvore_avl" e "arvore_binaria", cada uma vai armazenar os arquivos de saída de suas respectivas estruturas de dados, é importante que essas pastas estejam lá e escritas dessa maneira, caso contrário o programa vai reportar "Erro ao abrir arquivo de saida" e encerrar.

## Autores

- Emanuel Guimarães Santana - emanuel.gui.santana@gmail.com
- Evelen Pinheiro de Oliveira - evelenpinheiro62@gmail.com
- Marcos Eduardo da Silva Braga - dudusilvabraga@hotmail.com

