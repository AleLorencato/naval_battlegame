#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

int mp[6][6], ver[6][6], verificai, verificaj;

void decoracao(void);
int dartiro(int tiro[6][6], char matrizvisual[6][6]);
void mostraMatriz(int m[6][6], char matrizvisual[6][6]);
int verificaVitoria();
main()
{

  int i, j, elementos, m, n, igual, vv;
  int nivel, vidas;
  printf("Bem vindo ao jogo Batalha Naval!\n\n");
  printf("Selecione a Dificuldade:\n1-Facil 2-Medio 3-Dificil ");
  scanf("%d", &nivel);
  switch (nivel)
  {
  case 1:
    vidas = 30;
    break;
  case 2:
    vidas = 25;
    break;
  default:
    vidas = 20;
    break;
  }

  char mv[6][6];
  srand(time(NULL));
  printf("  ");
  decoracao();
  printf("Batalha Naval");
  decoracao();
  printf("\n\n");

  printf("Como o Jogo Funciona:\nVoce deve destruir os barcos inimigos antes que suas vidas acabem.\nLegenda: < X >-Acertou o Barco inimigo  < / >-Acertou o Mar\n");

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      mp[i][j] = 1;
    }
  }

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      mv[i][j] = '~';
    }
  }

  // Sistema de randomização do spawn do barco

  for (m = 0; m <= 10; m++)
  {
    i = rand() % 6;
    j = rand() % 6;
    mp[i][j] = 2;
  }

  // Matriz para teste do acerto

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      ver[i][j] = mp[i][j];
    }
  }

  // Teste do programa
  do
  {
    mostraMatriz(mp, mv);
    int acertou = dartiro(ver, mv);
    vv = verificaVitoria();

    system("cls");
    if (acertou)
    {
      printf("\n\nAcertou!!!\n");
    }
    else
    {
      printf("\n\nErrou!!!\n");
    }
    vidas--;

    if (vidas == 15)
    {
      printf("\nRestam 15 tentativas\n");
    }
    if (vidas == 10)
    {
      printf("\nSo restam 10 tentativas\n");
    }
    if (vidas == 5)
    {
      printf("\nSo restam 5 tentativas\n");
    }
  } while (vv == 1 && vidas > 0);

  if (vidas > 0)
  {
    printf("\nVOCE GANHOU DA MAQUINA");
    getch();
  }
  else
  {
    printf("\n Suas vidas acabaram!!");
    printf("\nOS COMPUTADORES IRAO DOMINAR O MUNDO");
    getch();
  }
  // Fim do Programa.
}

// Funções

int verificaVitoria()
{
  int i, j;
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (mp[i][j] == 2)
      {
        return 1;
      }
    }
  }
  return 2;
}

int dartiro(int tiro[6][6], char matrizvisual[6][6])
{
  int i, j;
  int linha, coluna;
  printf("Selecione uma linha para dar um tiro: ");
  scanf("%d", &linha);
  printf("Selecione uma coluna para dar um tiro: ");
  scanf("%d", &coluna);
  linha--;
  coluna--;
  tiro[linha][coluna] = 3;

  if (mp[linha][coluna] == 2)
  {
    matrizvisual[linha][coluna] = 'X';
    mp[linha][coluna] = 1;
    return 1;
  }
  else if (mp[linha][coluna] == 1)
  {
    matrizvisual[linha][coluna] = '/';
    return 0;
  }
}

void mostraMatriz(int m[6][6], char matrizvisual[6][6])
{
  int i, j, num;

  printf("\t\t   -------------------\n\t\t   |Tabuleiro Inimigo|\n\t\t   -------------------\n");
  printf("\t1 \t2 \t3 \t4 \t5 \t6\n\n");

  // for (i = 0; i < 6; i++)
  // {
  //   for (j = 0; j < 6; j++)
  //   {
  //     printf("\t%d", m[i][j]);
  //     if (j == 5)
  //     {
  //       printf("\n\n");
  //     }
  //   }
  // }
  num = 1;
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (j == 0)
      {
        printf("%d", num);
      }
      printf("\t%c", matrizvisual[i][j]);
      if (j == 5)
      {
        printf("\n\n");
      }
    }
    num++;
  }
}

void decoracao(void)
{
  int ig;
  for (ig = 0; ig < 20; ig++)
  {
    printf("=");
  }
}
