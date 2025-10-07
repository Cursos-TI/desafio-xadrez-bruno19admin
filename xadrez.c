#include <stdio.h>

// Função recursiva para movimentar a Torre (horizontalmente para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha (horizontalmente para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo (diagonal para cima e à direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função com loops aninhados para o Bispo (vertical + horizontal)
void moverBispoComLoops(int vertical, int horizontal) {
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("Cima, Direita\n");
        }
    }
}

// Função com loops complexos para o Cavalo (duas casas para cima e uma para a direita)
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 0, j = 0; i < movimentosVerticais; i++) {
        if (i == 1) {
            while (j < movimentosHorizontais) {
                printf("Direita\n");
                j++;
                if (j == 1) break; // interrompe após uma casa
            }
        }
        if (i < movimentosVerticais) {
            printf("Cima\n");
            continue; // continua para próxima iteração vertical
        }
    }
}

int main() {
    // Movimento da Torre
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo com recursividade
    int casasBispo = 5;
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // Movimento do Bispo com loops aninhados
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(2, 2); // Exemplo: 2 movimentos verticais, 2 horizontais

    // Movimento da Rainha
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo
    printf("\n");
    moverCavalo();

    return 0;
}
