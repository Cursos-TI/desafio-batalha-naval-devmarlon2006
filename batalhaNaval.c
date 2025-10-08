#include <stdio.h>
#include <stdlib.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10] = {0}; // Tabuleiro 10x10 inicializado com 0s
    // Posicionando navio horizontal (3 partes) na linha 2, colunas 1 a 3
    tabuleiro[1][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    // Posicionando navio vertical (2 partes) na coluna 5, linhas 4 a 5
    tabuleiro[3][4] = 3;
    tabuleiro[4][4] = 3;
    printf("Navio Horizontal: (2,1), (2,2), (2,3)\n");
    printf("Navio Vertical: (4,5), (5,5)\n");
    printf("Tabuleiro Atual:\n");

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            printf("%d ", tabuleiro[i][j]);

        }

        printf("\n");

    }

    int tabuleiroHabilidades[10][10] = {0}; // Tabuleiro para habilidades
    // Exemplo de habilidade em cruz no centro do tabuleiro
    int centroX = 5, centroY = 5;
    for (int i = -1; i <= 1; i++) {
        tabuleiroHabilidades[centroX + i][centroY] = 1; // Vertical
        tabuleiroHabilidades[centroX][centroY + i] = 1; // Horizontal
    }
    printf("Tabuleiro com Habilidade em Cruz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroHabilidades[i][j]);
        }
        printf("\n");
    }
    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
