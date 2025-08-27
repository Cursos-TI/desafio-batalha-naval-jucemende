#include <stdio.h>

int main() {
printf("===== NÍVEL NOVATO =====\n\n");

int tabuleiro[10][10] = {0};

    /* Navio horizontal */
    tabuleiro[3][1] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[3][3] = 3;

    /* Navio vertical */
    tabuleiro[4][7] = 3;
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;

    /* Navio diagonal 1*/
    tabuleiro[5][5] = 3;
    tabuleiro[6][4] = 3;
    tabuleiro[7][3] = 3;

    /* Navio diagonal 2 */
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}