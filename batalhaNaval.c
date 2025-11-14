#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
int main() {
    // Inicializa o tabuleiro 10x10 com zeros (água)
    int tabuleiro[10][10];
    
    // Preenche todo o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Declara os vetores para os navios
    int navio_horizontal[3];
    int navio_vertical[3];
    
    // Inicializa os navios com valor 3
    for (int i = 0; i < 3; i++) {
        navio_horizontal[i] = 3;
        navio_vertical[i] = 3;
    }
    
    // Posiciona o navio horizontal (linha 2, colunas 3 a 5)
    int linha_horizontal = 2;
    int coluna_inicial_horizontal = 3;
    
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_horizontal][coluna_inicial_horizontal + i] = navio_horizontal[i];
    }
    
    // Posiciona o navio vertical (coluna 7, linhas 5 a 7)
    int coluna_vertical = 7;
    int linha_inicial_vertical = 5;
    
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_inicial_vertical + i][coluna_vertical] = navio_vertical[i];
    }
    
    // Exibe o tabuleiro
    printf("Tabuleiro do Batalha Naval (10x10):\n");
    printf("0 = Agua | 3 = Navio\n\n");
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

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
