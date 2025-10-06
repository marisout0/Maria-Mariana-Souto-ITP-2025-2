# Introdução a Técnicas de Programação - Unidade 1
**Aluno**: Maria Mariana Varela Cavalcanti Souto
**Matrícula**: 20250033894
**Período**: 2025.2

## 📁 Estrutura do Projeto

- `projeto/`: Projeto principal da unidade
- `listas/`: Soluções das listas de exercícios
- `README.md`: Este arquivo

## 🚀 Projeto: Jogo da velha com IA básica

**Descrição**: o projeto é um jogo da velha interativo (humano vs. IA básica) e aplica os conceitos fundamentais de programação em C (estruturas de dados, controle de fluxo, funções).

**Repositório**: https://github.com/marisout0/Maria-Mariana-Souto-ITP-2025-2

**Vídeo de Demonstração**: https://youtu.be/djTUS18Z_1I

### Funcionalidades Implementadas:
-** Inicialização do Tabuleiro: ** Configura o tabuleiro do jogo da velha com espaços vazios no início de cada partida.
- **Impressão do Tabuleiro:** Exibe o estado atual do tabuleiro para que os jogadores possam visualizá-lo.
-** Verificação de Vencedor:** Determina se algum jogador conseguiu três de seus símbolos em linha, coluna ou diagonal.
- **Verificação de Empate:** Checa se todas as células do tabuleiro estão preenchidas sem que haja um vencedor.
- **Jogada do Jogador Humano:** Permite que o usuário insira a linha e coluna onde deseja fazer sua jogada, com validação de entrada.
- **Jogada da IA (Básica):** A inteligência artificial faz uma jogada aleatória em uma posição vazia do tabuleiro.
-** Controle do Fluxo do Jogo:** Gerencia a sequência de jogadas, verificando a cada rodada se há um vencedor ou empate.

### Conceitos da U1 Aplicados:
- **Estruturas condicionais:** Foram usadas nas funções imprimirTabuleiro (para adicionar as linhas divisórias), verificarVencedor (para checar todas as combinações possíveis de vitória), verificarEmpate (para saber se o tabuleiro está cheio), jogadaHumano (para validar a entrada do usuário e a posição da jogada) e main (para determinar o resultado final do jogo e quem venceu ou se houve empate).
- **Estruturas de repetição:** Os loops for foram usados nas funções inicializarTabuleiro, imprimirTabuleiro, verificarVencedor e verificarEmpate para percorrer as linhas e colunas do tabuleiro. O loop do-while foi usado na função jogadaHumano para garantir que o jogador insira uma jogada válida antes de continuar. Além disso ele foi usado na função jogadaIA para encontrar uma posição vazia aleatória no tabuleiro. O loop while foi usado na função main para controlar o fluxo principal do jogo, continuando enquanto não houver vencedor ou empate.
-** Vetores:** Foi utilizado um array bidimensional tabuleiro[3][3] para representar a grade do jogo da velha, armazenando os símbolos ('X', 'O' ou ' ').
- **Funções: ** Existem 7 funções no código:
inicializarTabuleiro(): Prepara o tabuleiro no início do jogo.
imprimirTabuleiro(): Mostra o estado atual do tabuleiro.
verificarVencedor(): Checa se há um vencedor.
verificarEmpate(): Verifica se o jogo terminou em empate.
jogadaHumano(): Lida com a entrada e validação da jogada do jogador humano.
jogadaIA(): Implementa a lógica básica da jogada da IA.
main(): A função principal que orquestra o fluxo do jogo, chamando as outras funções.

## 📚 Listas de Exercícios
**Observação:** Acabei sem querer trocando o nome de 2 arquivos, o arquivo da lista 5 na verdade remete aos exercícios da lista 6 e o arquivo da lista 6 remete aos exercícios da lista 5

### Semana 2 - Variáveis, Tipos e Operadores:
- ✅ Problema 1: Calculadora de IMC
- ✅ Problema 2: Conversão de temperatura
- ✅ Problema 3: Cálculo de juros compostos
- ✅ Problema 4: Operações aritméticas básicas

### Semana 3 - Condicionais:
- ✅ Problema 1: Classificação de IMC
- ✅ Problema 2: Calculadora de energia elétrica
- ✅ Problema 3: Sistema de notas
- ✅ Problema 4: Pedra, papel, tesoura
- ✅ Problema 5: Calculadora de desconto progressivo
- ✅ Problema 6: Diagnóstico médico simples
- ✅ Problema 7: Sistema de equações do 2º grau
- ✅ Problema 8: Validador de triângulos

### Semana 4A - Repetições:
- ✅ Problema 1: Dobrar folha
- ✅ Problema 2: Homem Aranha
- ✅ Problema 3: Números colegas
- ✅ Problema 4: Jogo de dardos

### Semana 4B - Análise e Padrões:
- ✅ Questões 1-4: Análise de código
- ✅ Questões 5-11: Implementações

### Semana 5 - Funções (Parte 1):
- ✅ Problema 1: Horários das rondas
- ✅ Problema 2: Primos triplos
- ✅ Problema 3: Pousando a sonda espacial

### Semana 6 - Vetores:
- ✅ Problema 1: MEC - Correção ENEM
- ✅ Problema 2: Álbum de figurinhas
- ✅ Problema 3: A construção da ponte
- ✅ Problema 4: Em busca do tesouro perdido

## 🎯 Principais Aprendizados
Um dos meus principais aprendizados na Unidade 1 foi aprender a organizar melhor meus códigos, já que como eram várias listas e o projeto  que eu estava fazendo em vários momentos do meu dia, eu tinha que comentar nos códigos para que eu pudesse entender o que estava fazendo antes. Para mim revisitar os conceitos básicos foi muito importante principalmente a parte de arrays, a implementação de lógicas de verificação (vitória e empate), a gestão básica da entrada do usuário , que acabaram me ajudando até em outras matérias, além de ter uma oportunidade de aprender uma nova linguagem de programação.

## 🔧 Ambiente de Desenvolvimento
**Ambiente de desenvolvimento/execução:** Google Colab, que forneceu um ambiente baseado em Linux com terminal acessível para compilação e execução do código, além de um editor de texto para escrever o código C.
**Compilador:** GCC (GNU Compiler Collection), utilizado para transformar o código-fonte em C em um arquivo executável.
**Editor de texto:** O editor de código integrado do Google Colab.
