#include <stdio.h>

int main() {
    printf("===== NÍVEL MESTRE =====\n\n");

    int N = 5; // tamanho da matriz (5x5)
    int matriz[5][5]; // matriz onde vamos desenhar as habilidades

    printf("Saída de habilidade em cone\n");
    for (int i = 0; i < N; i++) {          // percorre as linhas
        for (int j = 0; j < N; j++) {      // percorre as colunas
            // preenche um triângulo para baixo (cone)
            if (j >= (N/2 - i) && j <= (N/2 + i)) {
                matriz[i][j] = 1; // marca posição com 1
            } else {
                matriz[i][j] = 0; // fora do cone é 0
            }
            printf("%d ", matriz[i][j]);   // imprime valor
        }
        printf("\n"); // quebra de linha
    }
    printf("\n");

    printf("Saída de habilidade em octaedro:\n");
    for (int i = 0; i < N; i++) {          // percorre as linhas
        for (int j = 0; j < N; j++) {      // percorre as colunas
            int di = i - N/2; // distância da linha até o meio
            if (di < 0) di = -di; // valor absoluto
            int dj = j - N/2; // distância da coluna até o meio
            if (dj < 0) dj = -dj; // valor absoluto

            // se a soma das distâncias for menor ou igual ao raio, marca 1
            if (di + dj <= N/2) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
            printf("%d ", matriz[i][j]);   // imprime valor
        }
        printf("\n");
    }
    printf("\n");

    printf("Saída de habilidade em cruz:\n");
    for (int i = 0; i < N; i++) {          // percorre as linhas
        for (int j = 0; j < N; j++) {      // percorre as colunas
            // marca linha do meio ou coluna do meio
            if (i == N/2 || j == N/2) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
            printf("%d ", matriz[i][j]);   // imprime valor
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
