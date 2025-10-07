#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita usando FOR
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita usando WHILE
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha: 8 casas para a esquerda usando DO-WHILE
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda usando loops aninhados
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;
    printf("\nMovimento do Cavalo:\n");

    // Loop externo com FOR para movimentos verticais (Baixo)
    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Baixo\n");

        // Loop interno com WHILE para movimento horizontal (Esquerda)
        int j = 0;
        while (j < movimentosHorizontais && i == movimentosVerticais - 1) {
            // Só executa na última etapa vertical para formar o "L"
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}
