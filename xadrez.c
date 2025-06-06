#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 1;

    // Movimento da Torre: 5 casas para a direita usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita usando WHILE
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    // Movimento do cavalo: 2 para cima e 1 para direita
    printf("\nMovimento do cavalo:\n");
    while (casasCavalo--) {
        for (int i = 0; i < 2; i++) { // 2 para esquerda
            printf("Cima\n");
        }
        printf("Direita\n"); // 1 para direita
    }

    return 0;
}