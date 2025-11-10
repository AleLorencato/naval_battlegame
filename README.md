# 🚢 Batalha Naval (Terminal Game em C)

Um jogo clássico de Batalha Naval desenvolvido em C, jogado diretamente no terminal. O objetivo é destruir todos os barcos inimigos antes que suas vidas acabem!

## 📖 Como funciona

O jogador escolhe a dificuldade:

Fácil → 30 vidas

Médio → 25 vidas

Difícil → 20 vidas

O tabuleiro é uma matriz 6x6.

Os barcos são posicionados aleatoriamente pelo computador.

O jogador escolhe uma linha e uma coluna para atirar.

O resultado pode ser:

X → Acertou um barco inimigo

/ → Acertou o mar

O jogo termina quando:

Todos os barcos forem destruídos (vitória)

As vidas acabarem (derrota)

## 🎮 Exemplo de gameplay

```bash
Bem vindo ao jogo Batalha Naval!

Selecione a Dificuldade:
1-Facil 2-Medio 3-Dificil 2

====================Batalha Naval====================

Como o Jogo Funciona:
Voce deve destruir os barcos inimigos antes que suas vidas acabem.
Legenda: < X >-Acertou o Barco inimigo  < / >-Acertou o Mar

           -------------------
           |Tabuleiro Inimigo|
           -------------------
    1     2     3     4     5     6

1   ~     ~     ~     ~     ~     ~
2   ~     ~     ~     ~     ~     ~
3   ~     ~     ~     ~     ~     ~
4   ~     ~     ~     ~     ~     ~
5   ~     ~     ~     ~     ~     ~
6   ~     ~     ~     ~     ~     ~

Selecione uma linha para dar um tiro: 3
Selecione uma coluna para dar um tiro: 4

Acertou!!!
```

## ⚙️ Requisitos

Compilador C (ex: GCC)

Sistema operacional Windows (usa conio.h e windows.h)

## 🚀 Como compilar e executar

1.Clone este repositório:
```bash
git clone https://github.com/AleLorencato/naval_battlegame.git
cd naval_battlegame
```
2.Compile o código:
```bash
gcc naval_battle -o naval_battle
```
3.Execute o jogo:
```bash
./naval_battle
```
## 📂 Estrutura do projeto

```
batalha-naval-c/
│── naval_battle.c   # Código principal do jogo
│── naval_battle.exe         # Documentação do projeto
```

## 🛠️ Funcionalidades principais

Sistema de randomização dos barcos

Exibição visual do tabuleiro com símbolos (~, X, /)

Controle de vidas baseado na dificuldade

Mensagens dinâmicas de progresso (tentativas restantes)

Verificação automática de vitória ou derrota

## 👨‍💻 Autor

Projeto desenvolvido em C como trabalho final da disciplina de lógica de programação.
