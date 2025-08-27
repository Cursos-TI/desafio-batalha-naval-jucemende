#include <stdio.h>

int main() {
printf("===== NÍVEL NOVATO =====\n\n");

int tabuleiro[6][6] = {0};

tabuleiro[1][3] = 1;
tabuleiro[2][3] = 1;
tabuleiro[3][3] = 1;

tabuleiro[4][0] = 1;
tabuleiro[4][1] = 1;
tabuleiro[4][2] = 1;

for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}
printf("\n\n");
return 0;
}